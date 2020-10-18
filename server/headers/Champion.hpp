#ifndef CHAMPION_H
#define CHAMPION_H

class Champion{
private:
    string name;
    Attribute* attribs;
    string type;
public:
    Champion(string name);
    string getType();
};

#endif