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
    Server* server = new Server(8888);
    server->listenForClients();
    server->sendPlayers();
    vector<Player*> players;
    Player* currentPlayer;
    struct instruction action;
    struct moviment move;
    char message[128];
    for (int i = 0; i < MAX_CONNECTIONS; i++) {
        players.push_back(server->getPlayers()[i]);
    }

    //neste ponto a lista de players esta ok na teoria
    sort(players.begin(), players.end(), compareSpeed);

    int activePlayers = MAX_CONNECTIONS;
    //vetor ja ordenando em ordem de quem joga primeiro
    while (activePlayers > 1) {
        //representa a partida
        turn++;
        for (int i = 0; i < MAX_CONNECTIONS; i++) {  //representa um turno
            currentPlayer = players[i];
            if (currentPlayer->getChampion()->getAttribs()->getLife() <= 0) continue;
            server->sendStatusBroadcast(currentPlayer->getId());
            action = server->waitForInstruction(currentPlayer);
            move = currentPlayer->setDamage(action.type, turn);
            memset(message, '\0', 128);
            if (move.areaEffect == true) {
                for (int j = 0; j < MAX_CONNECTIONS; j++) {
                    players[j]->getChampion()->getDamage(move.value, move.effects);
                    std::cout << "[SERVIDOR] O Jogador " << currentPlayer->getNickname() << " causou dano em área "
                              << "(-" << move.value << " HP)" << endl;
                    sprintf(message, "[SERVIDOR] O jogador %s causou um dano em área (-%d HP) de todos jogadores.", currentPlayer->getNickname().c_str(), &move.value);
                    server->sendMessageBroadcast(message);
                }
                //impacta em todos os players
            } else {
                if (move.type == DAMAGE_SPELL) {
                    for (int j = 0; j < MAX_CONNECTIONS; j++) {
                        if (players[j]->getId() == action.target) {
                            players[j]->getChampion()->getDamage(move.value, move.effects);
                            std::cout << "[SERVIDOR] O Jogador " << currentPlayer->getNickname() << " atacou o jogador " << players[j]->getNickname() << "(-" << move.value << " HP)" << endl;
                            sprintf(message, "[SERVIDOR] O jogador %s atacou o jogador %s (-%d HP)", currentPlayer->getNickname().c_str(), players[j]->getNickname().c_str(), &move.value);
                            server->sendMessageBroadcast(message);
                        }
                    }
                } else {
                    for (int j = 0; j < MAX_CONNECTIONS; j++) {
                        if (players[j]->getId() == action.target) {
                            players[j]->getChampion()->getHealed(move.value);
                            std::cout << "[SERVIDOR] O Jogador " << currentPlayer->getNickname() << " curou o jogador " << players[j]->getNickname() << "(+" << move.value << " HP)" << endl;
                            sprintf(message, "[SERVIDOR] O jogador %s curou o jogador %s (+%d HP)", currentPlayer->getNickname().c_str(), players[j]->getNickname().c_str(), &move.value);
                            server->sendMessageBroadcast(message);
                        }
                    }
                }
                //impacto apenas no target
            }
            //wait for instruction
        }
    }
    server->closeConnection();
    return 0;
}
