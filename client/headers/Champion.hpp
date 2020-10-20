#ifndef CHAMPION_H
#define CHAMPION_H

#include "Attributes.hpp"
#include "Globals.hpp"
#include "Spell.hpp"

class Champion {
   private:
    Attributes *attribs;
    string name;
    string type;
    vector<Spell> spells;
    /* data */
   public:
    Champion(int championId);
    Attributes *getAttributes();
    string getName();
    string getType();
    vector<Spell> getSpells();
    void setAttributes(Attributes *attribs);
};

#endif