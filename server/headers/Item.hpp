#ifndef ITEM_H
#define ITEM_H

class Item {
   private:
    int id;
    string name;
    string description;
    Attribute* attribs;
    string type;

   public:
    Item(string name);
    int getId();
    string getName();
    string getDescription();
    Attribute* getAttribs();
    string getType();
};

#endif