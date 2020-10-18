#ifndef ATTRIBUTE_H
#define ATTRIBUTE_H

class Attribute {
   private:
    int attackDamage, abilityPower;
    int armor, magicResist;
    int life, speed;

   public:
    Attribute(int attackDamage, int abilityPower, int armor, int magicResist, int life, int speed);
};

#endif