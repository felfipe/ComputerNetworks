#include "../headers/Champion.hpp"

Champion::Champion(string name, Attributes *attribs, string type, vector<Spell> spells) {
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