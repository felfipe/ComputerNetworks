#ifndef CHAMPION_H
#define CHAMPION_H

class Champion {
   private:
    string name;
    Attribute* attribs;
    string type;
    vector<Item> item;

   public:
    Champion(string name);
    string getName();
    string getType();
    vector<Item> getItem();
    Attribute* getAttribs();
};

#endif