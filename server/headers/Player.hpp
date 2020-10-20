#ifndef PLAYER_H
#define PLAYER_H

#include "Champion.hpp"
#include "Globals.hpp"

class Player {
   private:
    string nickname;
    Champion* champion;
    int socket;

   public:
    Player(string nickname, int socket, int champion, int item1, int item2);
    Champion* getChampion();
    struct moviment setDamage(int action, int turn);
    std::string getNickname();
    int getSocket();
};

#endif