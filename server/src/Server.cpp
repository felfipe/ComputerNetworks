#include "../headers/Server.hpp"

#include "../headers/Globals.hpp"

Server::Server(int port) {
    socketFd = socket(AF_INET, SOCK_STREAM, 0);
    if (socketFd == -1) {
        cout << "[ERROR] Failed to create socket!" << endl;
        return;
    }
    server.sin_family = AF_INET;
    server.sin_addr.s_addr = INADDR_ANY;
    server.sin_port = htons(port);
    memset(&server.sin_zero, 0, sizeof(server.sin_zero));
    if (bind(socketFd, (struct sockaddr *)&server, sizeof(server)) < 0) {
        cout << "[ERROR] Failed to bind!" << endl;
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
            cout << "[ERROR] Connection Error " << endl;
            continue;
        }
        cout << "[INFO] New connection accepted (IP " << inet_ntoa(client.sin_addr) << ":" << client.sin_port << ")" << endl;
        this->setUpPlayer(socket_client, cli_id);
        cli_id++;
        if (cli_id == MAX_CONNECTIONS)
            break;
    }
}

vector<Player *> Server::getPlayers() {
    return this->playerlist;
}

void Server::setUpPlayer(int socket_client, int cli_id) {
    char name_c[256];
    recv(socket_client, name_c, 20, 0);
    int champion;
    recv(socket_client, &champion, sizeof(int), 0);
    int item[2];
    recv(socket_client, &item[0], sizeof(int), 0);
    recv(socket_client, &item[1], sizeof(int), 0);
    string name(name_c);
    this->playerlist.push_back(new Player(cli_id, name, socket_client, champion, item[0], item[1]));

    cout << "[INFO] Player setted up. Name: " << this->playerlist[cli_id]->getNickname();
    cout << " / Champion: " << this->playerlist[cli_id]->getChampion()->getName();
    cout << " / Item 0: " << this->playerlist[cli_id]->getChampion()->getItem()[0]->getName();
    cout << " / Item 1: " << this->playerlist[cli_id]->getChampion()->getItem()[1]->getName() << endl;

    send(socket_client, &cli_id, sizeof(int), 0);
    return;
}
void Server::closeConnection() {
    for (auto i : this->playerlist)
        close(i->getSocket());
    close(this->socketFd);
    return;
}

void Server::sendPlayers() {
    cout << "[INFO] Sending informations about all players..." << endl;
    char name[20];
    int item[2];
    int champion;
    for (int i = 0; i < MAX_CONNECTIONS; i++) {
        for (int j = 0; j < MAX_CONNECTIONS; j++) {
            memset(name, '\0', 20);
            strcpy(name, this->playerlist[j]->getNickname().c_str());
            champion = this->playerlist[j]->getChampion()->getId();
            item[0] = this->playerlist[j]->getChampion()->getItem()[0]->getId();
            item[1] = this->playerlist[j]->getChampion()->getItem()[1]->getId();
            cout << name << " " << champion << " " << item[0] << " " << item[1];
            send(this->playerlist[i]->getSocket(), &i, sizeof(int), 0);
            send(this->playerlist[i]->getSocket(), &name, 20, 0);
            send(this->playerlist[i]->getSocket(), &champion, sizeof(int), 0);
            send(this->playerlist[i]->getSocket(), item, 2 * sizeof(int), 0);
        }
    }
}

struct instruction Server::waitForInstruction(Player *player) {
    cout << "[INFO] Waiting for instructions from player " << player->getId() << "..." << endl;
    struct instruction instruction;
    recv(player->getSocket(), &instruction.type, sizeof(int), 0);
    recv(player->getSocket(), &instruction.target, sizeof(int), 0);
    cout << instruction.type << " " << instruction.target << endl;
    return instruction;
}

void Server::sendStatusBroadcast(int id_next_player) {
    struct status status;
    cout << "[INFO] Sending broadcast Status for all clients." << endl;
    for (int i = 0; i < MAX_CONNECTIONS; i++) {
        for (int j = 0; j < MAX_CONNECTIONS; j++) {
            status.life = this->playerlist[j]->getChampion()->getAttribs()->getLife();
            status.mana = this->playerlist[j]->getChampion()->getAttribs()->getMana();
            status.armor = this->playerlist[j]->getChampion()->getAttribs()->getArmor();
            status.atackDamage = this->playerlist[j]->getChampion()->getAttribs()->getAttackDamage();
            status.habilityPower = this->playerlist[j]->getChampion()->getAttribs()->getAbilityPower();
            status.medicResist = this->playerlist[j]->getChampion()->getAttribs()->getMagicResist();
            status.your_turn = id_next_player;
            send(playerlist[i]->getSocket(), &status, sizeof(struct status), 0);
        }
    }
}

void Server::sendMessageBroadcast(char *message) {
    for (int i = 0; i < MAX_CONNECTIONS; i++) {
        send(this->getPlayers()[i]->getSocket(), message, 128, 0);
    }
}