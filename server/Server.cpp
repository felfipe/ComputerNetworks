#include "headers/Server.hpp"
/*
void *Server::connection_listener(void *clientFd) {
    int client = *((int *)clientFd);
    int read_size;
    char buffer[256];
    std::cout << "[INFO] Connection listener created" << std::endl;
    int recived_bytes;
    while (1) {
        memset(buffer, 0, 256);
        recived_bytes = recv(client, buffer, 256, 0);
        buffer[recived_bytes] = '\0';
        printf("Client: %s", buffer);
    }
}

void *Server::connection_sender(void *clientFd) {
    int client = *(int *)clientFd;
    std::cout << "[INFO] Connection sender created" << std::endl;
    while (1) {
        char buffer[256];
        fgets(buffer, 256, stdin);
        send(client, buffer, strlen(buffer), 0);
    }
}
*/
Server::Server(int port, int number_players) {
    this->number_players = number_players;
    socketFd = socket(AF_INET, SOCK_STREAM, 0);
    if (socketFd == -1) {
        std::cout << "[ERROR] Failed to create socket!" << std::endl;
        return;
    }
    server.sin_family = AF_INET;
    server.sin_addr.s_addr = INADDR_ANY;
    server.sin_port = htons(port);
    memset(&server.sin_zero, 0, sizeof(server.sin_zero));
    if (bind(socketFd, (struct sockaddr *)&server, sizeof(server)) < 0) {
        std::cout << "[ERROR] Failed to bind!" << std::endl;
        return;
    }
    return;
}

void Server::listenForClients() {
    listen(this->socketFd, MAX_CONNECTIONS);
    int sizeSock = sizeof(struct sockaddr_in);
    struct sockaddr_in client;
    int cli_id = 0;
    int socket_client;
    while ((socket_client = accept(socketFd, (struct sockaddr *)&client, (socklen_t *)&sizeSock))) {
        if (socket_client < 0) {
            std::cout << "[ERROR] Connection Error " << std::endl;
            continue;
        }
        std::cout << "[INFO] New connection accepted (IP " << inet_ntoa(client.sin_addr) << ":" << client.sin_port << ")" << std::endl;
        this->setUpPlayer(socket_client, cli_id);
        /*
        th_clients_sender[cli_id] = std::thread(connection_sender, (void *)&socket_client[cli_id]);
        th_clients_listener[cli_id] = std::thread(connection_listener, (void *)&socket_client[cli_id]);
        */
        cli_id++;
        if (cli_id == number_players - 1)
            break;
    }
}

void Server::setUpPlayer(int socket_client, int cli_id) {
    char name_c[256];
    recv(socket_client, name_c, 20, 0);
    int champion;
    recv(socket_client, &champion, sizeof(int), 0);
    int item[2];
    recv(socket_client, &item[0], sizeof(int), 0);
    recv(socket_client, &item[1], sizeof(int), 0);
    std::string name(name_c);
    this->player[cli_id] = new Player(name, socket_client, champion, item[0], item[1]);
    std::cout << "[INFO] Player setted up. Name: " << this->player[cli_id]->getNickname();
    std::cout << " / Champion: " << this->player[cli_id]->getChampion()->getName();
    std::cout << " / Item 0: " << this->player[cli_id]->getChampion()->getItem()[0]->getName();
    std::cout << " / Item 1: " << this->player[cli_id]->getChampion()->getItem()[1]->getName() << std::endl;
    return;
}
void Server::closeConnection() {
    for (auto i : player)
        close(i->getSocket());
    close(this->socketFd);
    return;
}

void Server::sendPlayers() {
    char name[256];
    int item[2];
    int champion;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            memset(name, '\0', 256);
            strcpy(name, player[j]->getNickname().c_str());
            champion = player[j]->getChampion()->getId();
            item[0] = player[j]->getChampion()->getItem()[0]->getId();
            item[1] = player[j]->getChampion()->getItem()[1]->getId();
            std::cout << name << champion << item[0] << item[1];
            send(player[i]->getSocket(), &i, sizeof(int), 0);
            send(player[i]->getSocket(), &name, strlen(name), 0);
            send(player[i]->getSocket(), &champion, sizeof(int), 0);
            send(player[i]->getSocket(), &item, 2 * sizeof(int), 0);
        }
    }
}