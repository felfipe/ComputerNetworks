#include "headers/Client.hpp"

int main(int argc, char* argv[]) {
    Client* client = new Client("127.0.0.1", 8888);
    return 0;
}