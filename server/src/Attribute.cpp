#include <Attribute.hpp>
#include <Globals.hpp>

Attribute::Attribute(int attackDamage, int abilityPower, int armor, int magicResist, int life, int speed) {
    this->abilityPower = abilityPower;
    this->armor = armor;
    this->attackDamage = attackDamage;
    this->life = life;
    this->magicResist = magicResist;
    this->speed = speed;
}
