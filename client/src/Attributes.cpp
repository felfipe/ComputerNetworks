#include <Attributes.hpp>

Attributes::Attributes(int life, int atackDamage, int abilityPower, int armor, int magicResistence, int speed, int mana) {
    this->life = life;
    this->mana = mana;
    this->atackDamage = atackDamage;
    this->abilityPower = abilityPower;
    this->armor = armor;
    this->magicResistence = magicResistence;
    this->speed = speed;
}

int Attributes::getLife() {
    return this->life;
}
int Attributes::getMana() {
    return this->mana;
}
int Attributes::getAtackDamage() {
    return this->atackDamage;
}
int Attributes::getAbilityPower() {
    return this->abilityPower;
}
int Attributes::getArmor() {
    return this->armor;
}
int Attributes::getMagicResistence() {
    return this->magicResistence;
}
int Attributes::getSpeed() {
    return this->speed;
}

void Attributes::setLife(int life) {
    this->life = life;
}
void Attributes::setMana(int mana) {
    this->mana = mana;
}
void Attributes::setAtackDamage(int atackDamage) {
    this->atackDamage = atackDamage;
}
void Attributes::setAbilityPower(int abilityPower) {
    this->abilityPower = abilityPower;
}
void Attributes::setArmor(int armor) {
    this->armor = armor;
}
void Attributes::setMagicResistence(int magicResistence) {
    this->magicResistence = magicResistence;
}
void Attributes::setSpeed(int speed) {
    this->magicResistence = speed;
}