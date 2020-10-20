#include "headers/Server.hpp"

int main(int argc, char* argv[]) {
    Server* server = new Server(8888, 4);
    server->listenForClients();
    while (1) {
        printf("A");
    }
    server->closeConnection();
    return 0;
}
