#ifndef SPELL_H
#define SPELL_H
#include <string>
using namespace std;
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