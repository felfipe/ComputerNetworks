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
    Item(int id);
    int getId();
    string getName();
    string getDescription();
    Attribute* getAttribs();
    string getType();
    void applyItem(int value, int mana, set<string> effects, bool area, int turn);
};

#endif