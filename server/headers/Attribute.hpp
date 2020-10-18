#ifndef ATTRIBUTE_H
#define ATTRIBUTE_H

class Attribute {
   private:
    int attackDamage, abilityPower;
    int armor, magicResist;
    int life, mana, speed;

   public:
    Attribute(int attackDamage, int abilityPower, int armor, int magicResist, int life, int mana, int speed);
    int getArmor();
    int getAttackDamage();
    int getAbilityPower();
    int getMagicResist();
    int getLife();
    int getSpeed();
    int getMana();
    // set (?)
};

#endif