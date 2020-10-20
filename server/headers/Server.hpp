#include <arpa/inet.h>
#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>

#include <cstdlib>
#include <iostream>
#include <string>
#include <thread>

#include "Globals.hpp"
#ifndef __SERVER
#define __SERVER
#define MAX_CONNECTIONS 4
class Server {
   public:
    int socketFd;
    int socket_client[MAX_CONNECTIONS];

    Server(int port, int number_players);
    void listenForClients();
    void closeConnection();
    void getPlayer(int socket_client);
    int sendMessageBroadcast(int socket_client, char* message);
    int sendMessage(int socket_client, char* message);

   private:
    Player* player[MAX_CONNECTIONS];
    int number_players;
    struct sockaddr_in server;
    std::thread th_clients_listener[10];
    std::thread th_clients_sender[10];
    static void* connection_listener(void* clientFd);
    static void* connection_sender(void* clientFd);
};

#endif