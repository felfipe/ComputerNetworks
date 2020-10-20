#ifndef SPELL_H
#define SPELL_H
#include "Globals.hpp"

class Spell {
   private:
    string name;
    string type;
    string effect;
    int value;
    int manaCost;

   public:
    Spell(int champion, int spell);
    string getName();
    string getType();
    string getEffect();
    int getValue();
    int getManaCost();
};

#endif