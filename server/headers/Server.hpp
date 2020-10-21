#include <arpa/inet.h>
#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>

#include <cstdlib>
#include <iostream>
#include <string>
#include <thread>

#include "Player.hpp"
#ifndef __SERVER
#define __SERVER
#define MAX_CONNECTIONS 4
class Server {
   public:
    int socketFd;

    Server(int port);
    void listenForClients();
    void closeConnection();
    void setUpPlayer(int socket_client, int cli_id);
    void sendPlayers();
    void sendStatusBroadcast(int id_next_player);
    void sendMessageBroadcast(char* message);
    int sendMessage(int socket_client, char* message);
    vector<Player*> getPlayers();
    struct instruction waitForInstruction(Player* player);

   private:
    vector<Player*> playerlist;
    struct sockaddr_in server;
    std::thread th_clients_listener[10];
    std::thread th_clients_sender[10];
    /*static void* connection_listener(void* clientFd);
    static void* connection_sender(void* clientFd);
    */
};

#endif