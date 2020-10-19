#include <Spell.hpp>

Spell::Spell(string name, string effect, int value, int manaCost) {
    this->name = name;
    this->effect = effect;
    this->value = value;
    this->manaCost = manaCost;
}
string Spell::getName() {
    return this->name;
}
string Spell::getEffect() {
    return this->effect;
}
int Spell::getManaCost() {
    return this->manaCost;
}
int Spell::getValue() {
    return this->value;
}