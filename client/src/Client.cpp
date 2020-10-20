#include "../headers/Client.hpp"

/*void *Client::connection_sender(void *clientFd) {
    int client = *(int *)clientFd;
    cout << "[INFO] Connection sender created" << endl;
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
    cout << "[INFO] Connection listener created" << endl;
    int recived_bytes;
    while (1) {
        recived_bytes = recv(client, buffer, 256, 0);
        buffer[recived_bytes] = '\0';
        printf("Servidor: %s", buffer);
    }
    return 0;
}
*/
Client::Client(string address, int port) {
    char ip_address[20];
    strcpy(ip_address, address.c_str());  // string to char*

    socketFd = socket(AF_INET, SOCK_STREAM, 0);  // create socket server file descriptor

    if (socketFd == -1) {
        cout << "[ERROR] Failed to create socket!" << endl;
        return;
    }

    server.sin_family = AF_INET;
    server.sin_port = htons(port);

    if (inet_pton(AF_INET, ip_address, &server.sin_addr) <= 0) {  // verify ip address
        cout << "[ERROR] Invalid Address" << endl;
        return;
    }
    if (connect(socketFd, (struct sockaddr*)&server, sizeof(server))) {  // try to connect to server
        cout << "[ERROR] Connection Failed" << endl;
        return;
    }
    /*th_socket_sender = thread(connection_sender, (void *)&socketFd);
    th_socket_listener = thread(connection_listener, (void *)&socketFd);
    th_socket_listener.join();
    th_socket_sender.join();
    */
    return;
}

void Client::setUpClient(char* nickname, int championId, int* item) {
    send(this->socketFd, nickname, sizeof(nickname), 0);
    send(this->socketFd, &championId, sizeof(int), 0);
    send(this->socketFd, &item, 2 * sizeof(int), 0);
}
