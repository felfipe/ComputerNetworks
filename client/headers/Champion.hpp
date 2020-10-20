#ifndef Champion_H
#define Champion_H
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
    Champion(string name, Attributes *attribs, string type, vector<Spell> spells);
    Attributes *getAttributes();
    string getName();
    string getType();
    vector<Spell> getSpells();
    void setAttributes(Attributes *attribs);
};

#endif