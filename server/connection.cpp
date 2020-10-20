#include "headers/Server.hpp"

int main(int argc, char* argv[]) {
    Server* server = new Server(8888, 4);
    server->listenForClients();
    server->sendPlayers();
    int buu;
    while (1) {
        cin >> buu;
    }
    server->closeConnection();
    return 0;
}
