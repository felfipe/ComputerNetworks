#include "headers/Server.hpp"

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
    while ((socket_client[cli_id] = accept(socketFd, (struct sockaddr *)&client, (socklen_t *)&sizeSock))) {
        if (socket_client[cli_id] < 0) {
            std::cout << "[ERROR] Connection Error " << std::endl;
            continue;
        }
        std::cout << "[INFO] New connection accepted (IP " << inet_ntoa(client.sin_addr) << ":" << client.sin_port << ")" << std::endl;
        th_clients_sender[cli_id] = std::thread(connection_sender, (void *)&socket_client[cli_id]);
        th_clients_listener[cli_id] = std::thread(connection_listener, (void *)&socket_client[cli_id]);
        cli_id++;
        if (cli_id == number_players - 1)
            break;
    }
}
void Server::closeConnection() {
    for (auto i : socket_client)
        close(i);
    close(this->socketFd);
    return;
}