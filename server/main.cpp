#include "headers/Server.hpp"
bool compareSpeed(Player a, Player b) {
    return !a.getChampion()->getAttribs()->getSpeed() < b.getChampion()->getAttribs()->getSpeed();
}

int main(int argc, char* argv[]) {
    Server* server = new Server(8888, 4);
    server->listenForClients();
    server->sendPlayers();
    vector<Player> players;
    Player* currentPlayer;
    for (int i = 0; i < MAX_CONNECTIONS; i++) {
        players.push_back(server->getPlayers()[i])
    }
    //neste ponto a lista de players esta ok na teoria
    sort(players.begin(), players.end(), compareSpeed);
    //vetor ja ordenando em ordem de quem joga primeiro
    while (1) {                                      //representa a partida
        for (int i = 0; i < MAX_CONNECTIONS; i++) {  //representa um turno
            currentPlayer = &players[i]
            //wait for instruction
        }
    }
    server->closeConnection();
    return 0;
}
