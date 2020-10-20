#ifndef __CLIENT
#define __CLIENT

#include "Globals.hpp"

class Client {
   public:
    Client(string address, int port);
    int socketFd;
    struct sockaddr_in server;
    thread th_socket_listener;
    thread th_socket_sender;
    void setUpClient();

   private:
    /*static void* connection_sender(void* clientFd);
    static void* connection_listener(void* clientFd);
    */
};

#endif