#include "headers/Client.hpp"

void *Client::connection_sender(void *clientFd) {
    int client = *(int *)clientFd;
    std::cout << "[INFO] Connection sender created" << std::endl;
    while (1) {
        char buffer[256];
        fgets(buffer, 256, stdin);
        send(client, buffer, strlen(buffer), 0);
    }
    return 0;
}
void *Client::connection_listener(void *clientFd) {
    int client = *((int *)clientFd);
    int read_size;
    char buffer[2000];
    std::cout << "[INFO] Connection listener created" << std::endl;
    int recived_bytes;
    while (1) {
        recived_bytes = recv(client, buffer, 256, 0);
        buffer[recived_bytes] = '\0';
        printf("Servidor: %s", buffer);
    }
    return 0;
}
Client::Client(std::string address, int port) {
    char ip_address[20];
    strcpy(ip_address, address.c_str());  // std::string to char*

    socketFd = socket(AF_INET, SOCK_STREAM, 0);  // create socket server file descriptor

    if (socketFd == -1) {
        std::cout << "[ERROR] Failed to create socket!" << std::endl;
        return;
    }

    server.sin_family = AF_INET;
    server.sin_port = htons(port);

    if (inet_pton(AF_INET, ip_address, &server.sin_addr) <= 0) {  // verify ip address
        std::cout << "[ERROR] Invalid Address" << std::endl;
        return;
    }
    if (connect(socketFd, (struct sockaddr *)&server, sizeof(server))) {  // try to connect to server
        std::cout << "[ERROR] Connection Failed" << std::endl;
        return;
    }

    th_socket_sender = std::thread(connection_sender, (void *)&socketFd);
    th_socket_listener = std::thread(connection_listener, (void *)&socketFd);
    th_socket_listener.join();
    th_socket_sender.join();
    return;
}
