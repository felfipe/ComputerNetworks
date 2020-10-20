#include "../headers/Attribute.hpp"

Attribute::Attribute(int life, int atackDamage, int abilityPower, int armor, int magicResistence, int speed, int mana, int regenMana) {
    this->life = life;
    this->mana = mana;
    this->atackDamage = atackDamage;
    this->abilityPower = abilityPower;
    this->armor = armor;
    this->magicResistence = magicResistence;
    this->speed = speed;
    this->regenMana = regenMana;
}

int Attribute::getLife() {
    return this->life;
}

int Attribute::getMana() {
    return this->mana;
}

int Attribute::getAtackDamage() {
    return this->atackDamage;
}

int Attribute::getAbilityPower() {
    return this->abilityPower;
}

int Attribute::getArmor() {
    return this->armor;
}

int Attribute::getMagicResistence() {
    return this->magicResistence;
}

int Attribute::getSpeed() {
    return this->speed;
}

int Attribute::getRegenMana() {
    return this->regenMana;
}

void Attribute::setLife(int life) {
    this->life = life;
}

void Attribute::setMana(int mana) {
    this->mana = mana;
}

void Attribute::setAtackDamage(int atackDamage) {
    this->atackDamage = atackDamage;
}

void Attribute::setAbilityPower(int abilityPower) {
    this->abilityPower = abilityPower;
}

void Attribute::setArmor(int armor) {
    this->armor = armor;
}

void Attribute::setMagicResistence(int magicResistence) {
    this->magicResistence = magicResistence;
}

void Attribute::setSpeed(int speed) {
    this->magicResistence = speed;
}