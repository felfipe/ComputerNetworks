#ifndef CHAMPION_H
#define CHAMPION_H

class Champion {
   private:
    string name;
    Attribute* attribs;
    string type;
    vector<Item> item;
    Spell spell[4];

   public:
    Champion(string name);
    string getName();
    string getType();
    vector<Item> getItems();
    Attribute* getAttribs();
    Spell getSpell(int idx);
};

#endif