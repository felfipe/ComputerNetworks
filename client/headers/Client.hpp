#ifndef __CLIENT
#define __CLIENT

#include "Globals.hpp"
#include "Player.hpp"

class Client {
   private:
    vector<Player*> playerList;

   public:
    Client(string address, int port);
    int socketFd;
    struct sockaddr_in server;
    void receivePlayers();
    vector<Player*> getPlayerslist();
    void setUpClient(char* nickname, int championId, int* item);
    void sendInstruction(int instruction, int target);
    void waitForServer();

   private:
    /*static void* connection_sender(void* clientFd);
    static void* connection_listener(void* clientFd);
    */
};

#endif