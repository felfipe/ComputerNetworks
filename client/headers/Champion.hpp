#ifndef CHAMPION_H
#define CHAMPION_H

#include "Attribute.hpp"
#include "Globals.hpp"
#include "Spell.hpp"

class Champion {
   private:
    int id;
    Attribute *attribs;
    string name;
    int type;

   public:
    Champion(int championId);
    Attribute *getAttribute();
    string getName();
    int getType();
    void setAttribute(Attribute *attribs);
};

#endif