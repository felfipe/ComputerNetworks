#include <headers/Globals.hpp>

Attribute::Attribute(int attackDamage, int abilityPower, int armor, int magicResist, int life, int mana, int speed) {
    this->abilityPower = abilityPower;
    this->armor = armor;
    this->attackDamage = attackDamage;
    this->life = life;
    this->magicResist = magicResist;
    this->mana = mana;
    this->speed = speed;
}

int Attribute::getArmor() {
    return this->armor;
}

int Attribute::getAttackDamage() {
    return this->attackDamage;
}

int Attribute::getAbilityPower() {
    return this->abilityPower;
}

int Attribute::getMagicResist() {
    return this->magicResist;
}

int Attribute::getLife() {
    return this->life;
}

int Attribute::getSpeed() {
    return this->speed;
}

int Attribute::getMana() {
    return this->mana;
}
void Attribute::setArmor(int armor) {
    this->armor = armor;
}
void Attribute::setAttackDamage(int attackDamage) {
    this->attackDamage = attackDamage;
}
void Attribute::setAbilityPower(int abilityPower) {
    this->abilityPower = abilityPower;
}
void Attribute::setMagicResist(int magicResist) {
    this->magicResist = magicResist;
}
void Attribute::setLife(int life) {
    this->life = life;
}
void Attribute::setSpeed(int speed) {
    this->speed = speed;
}
void Attribute::setMana(int mana) {
    this->mana = mana
}