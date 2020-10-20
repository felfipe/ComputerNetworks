#ifndef SPELL_H
#define SPELL_H

class Spell {
   private:
    string name;
    string type;
    string effect;
    int value;
    int manaCost;

   public:
    Spell();
    string getName();
    string getType();
    string getEffect();
    int getValue();
    int getManaCost();
};

#endif