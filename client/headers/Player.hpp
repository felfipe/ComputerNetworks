#ifndef PLAYER_H
#define PLAYER_H

#include "Champion.hpp"
#include "Globals.hpp"

class Player {
   private:
    int id;
    string nickname;
    Champion* champion;
    Attribute* attribs;

   public:
    Player(int id, string name, int championId, int itemId1, int itemId2);
    int getId();
    Attribute* getAttribs();
    string getNickname();
    Champion* getChampion();
};

#endif