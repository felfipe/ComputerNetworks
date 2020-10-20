#ifndef CHAMPION_H
#define CHAMPION_H

class Champion {
   private:
    string name;
    Attribute* attribs;
    int type;
    vector<Item*> item;
    vector<string> effects;
    Spell* spell[4];

   public:
    Champion(int champion);
    string getName();
    int getType();
    vector<Item*> getItem();
    vector<string> getEffects();
    Attribute* getAttribs();
    void getDamage(int value, vector<string> effects);
    void getHealed(int heal);
    void setEffects(vector<string> effects);
    Attribute* getAttribs();
    Spell* getSpell(int idx);
    void applyItems(int type, int mana, int value, set<string> effects, bool areaEffect, int turn);
    void setItem(int itemId);
};

#endif