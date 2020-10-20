#include <arpa/inet.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>

#include <cstdlib>
#include <iostream>
#include <string>
#include <thread>

#ifndef __CLIENT
#define __CLIENT

class Client {
   public:
    Client(std::string address, int port);
    int socketFd;
    struct sockaddr_in server;
    std::thread th_socket_listener;
    std::thread th_socket_sender;
    void setUpClient();

   private:
    static void* connection_sender(void* clientFd);
    static void* connection_listener(void* clientFd);
};

#endif