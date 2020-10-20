#include "../headers/Champion.hpp"

int CHAMPION[6][8] = {
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0}};

Champion::Champion(int championId) {
    this->attribs = attribs;
    this->name = name;
    this->type = type;
    this->spells = spells;
}

string Champion::getName() {
    return this->name;
}
string Champion::getType() {
    return this->name;
}
vector<Spell> Champion::getSpells() {
    return this->spells;
}
void Champion::setAttributes(Attributes *attribs) {
    this->attribs = attribs;
}