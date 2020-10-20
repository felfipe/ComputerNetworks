#ifndef CHAMPION_H
#define CHAMPION_H

#include "Attribute.hpp"
#include "Globals.hpp"
#include "Item.hpp"
#include "Spell.hpp"

class Champion {
   private:
    int id;
    string name;
    Attribute *attribs;
    int type;
    vector<Item *> item;
    vector<string> effects;
    Spell *spell[4];

   public:
    Champion(int champion);
    int getId();
    string getName();
    int getType();
    vector<Item *> getItem();
    vector<string> getEffects();
    Attribute *getAttribs();
    void getDamage(int value, vector<string> effects);
    void getHealed(int heal);
    void setEffects(vector<string> effects);
    Spell *getSpell(int idx);
    void applyItems(int &type, int &mana, int &value, set<string> &effects, bool &areaEffect, int turn);
    void setItem(int itemId);
};

#endif