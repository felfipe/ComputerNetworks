#include <Spell.hpp>

Spell::Spell(string name, string effect, int value, int manaCost) {
    this->name = name;
    this->effect = effect;
    this->value = value;
    this->manaCost = manaCost;
}