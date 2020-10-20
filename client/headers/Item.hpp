#ifndef ITEM_H
#define ITEM_H
#include "Attributes.hpp"
#include "Globals.hpp"

class Item {
   private:
    int id;
    string name;
    string description;
    Attributes *attribs;
    /* data */
   public:
    Item(int id, string name, string description, Attributes *attribs);
    int getId();
    string getName();
    string getDescription();
    Attributes *getAttributes();
};

#endif