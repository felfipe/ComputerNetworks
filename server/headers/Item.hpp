#ifndef ITEM_H
#define ITEM_H

#include "Attribute.hpp"
#include "Globals.hpp"

class Item {
   private:
    int id;
    string name;
    string description;
    Attribute *attribs;
    int type;

   public:
    Item(int id);
    int getId();
    string getName();
    string getDescription();
    Attribute *getAttribs();
    int getType();
    void applyItem(int &value, int &mana, set<string> &effects, bool &area, int turn);
};

#endif