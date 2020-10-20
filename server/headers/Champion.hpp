#ifndef CHAMPION_H
#define CHAMPION_H

class Champion {
   private:
    string name;
    Attribute* attribs;
    string type;
    vector<Item> item;
    vector<string> effects;

   public:
    Champion(string name);
    string getName();
    string getType();
    vector<Item> getItem();
    vector<string> getEffects();
    Attribute* getAttribs();
    void getDamage(int value, vector<string> effects);
    void getHealed(int heal);
    void setEffects(vector<string> effects)
};

#endif