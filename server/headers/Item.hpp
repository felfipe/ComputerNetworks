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
    void applyItem(int value, vector<string> effects, bool area);
};

#endif