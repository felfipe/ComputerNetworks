#ifndef CHAMPION_H
#define CHAMPION_H

class Champion {
   private:
    string name;
    Attribute* attribs;
    string type;

   public:
    Champion(string name);
    string getName();
    string getType();
    Attribute* getAttribs();
};

#endif