#include "headers/Globals.hpp"
#include "headers/Server.hpp"

bool compareSpeed(Player* a, Player* b) {
    return !(a->getChampion()->getAttribs()->getSpeed() < b->getChampion()->getAttribs()->getSpeed());
}

int main(int argc, char* argv[]) {
    int value = 0;
    int spellType;
    int itemType;
    int mana = 0;
    set<string> effects;
    bool areaEffect = false;
    int turn = 0;
    Server* server = new Server(8888, 4);
    server->listenForClients();
    server->sendPlayers();
    vector<Player*> players;
    Player* currentPlayer;
    struct instruction action;
    struct moviment move;
    for (int i = 0; i < MAX_CONNECTIONS; i++) {
        players.push_back(server->getPlayers()[i]);
    }
    //neste ponto a lista de players esta ok na teoria
    sort(players.begin(), players.end(), compareSpeed);
    //vetor ja ordenando em ordem de quem joga primeiro
    while (1) {
        //representa a partida
        turn++;
        for (int i = 0; i < MAX_CONNECTIONS; i++) {  //representa um turno
            currentPlayer = players[i];
            action = server->waitForInstruction(currentPlayer);
            move = currentPlayer->setDamage(action.type, turn);
            if (move.areaEffect == true) {
                //impacta em todos os players
            } else {
                //impacto apenas no target
            }
            //wait for instruction
        }
    }
    server->closeConnection();
    return 0;
}
