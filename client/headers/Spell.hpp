#ifndef SPELL_H
#define SPELL_H
#include "Globals.hpp"

class Spell {
   private:
    string name;
    string effect;
    int manaCost;
    int value;
    /* data */
   public:
    Spell(string name, string effect, int manaCost, int value);
    string getName();
    string getEffect();
    int getManaCost();
    int getValue();
};

#endif