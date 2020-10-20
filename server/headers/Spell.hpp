#ifndef SPELL_H
#define SPELL_H

class Spell {
   private:
    string name;
    int type;
    string effect;
    int value;
    int manaCost;

   public:
    Spell(int champion, int spell);
    string getName();
    int getType();
    string getEffect();
    int getValue();
    int getManaCost();
};

#endif