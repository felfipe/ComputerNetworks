#include <headers/Globals.hpp>

string Spell::getName() {
    return this->name;
}
string Spell::getEffect() {
    return this->effect;
}
string Spell::getType() {
    return this->type;
}
int Spell::getManaCost() {
    return this->manaCost;
}
int Spell::getValue() {}