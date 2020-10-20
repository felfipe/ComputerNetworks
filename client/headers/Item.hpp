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
    /* data */
   public:
    Item(int id, string name, string description, Attribute *attribs);
    int getId();
    string getName();
    string getDescription();
    Attribute *getAttribute();
};

#endif