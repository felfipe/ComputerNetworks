#ifndef ATTRIBUTES_H
#define ATTRIBUTES_H
#include <string>
using namespace std;
class Attributes {
   private:
    int life;
    int mana;
    int atackDamage;
    int abilityPower;
    int armor;
    int magicResistence;
    int speed;
    /* data */
   public:
    Attributes(int life, int atackDamage, int abilityPower, int armor, int magicResistence, int speed, int mana);
    int getLife();
    int getMana();
    int getAtackDamage();
    int getAbilityPower();
    int getArmor();
    int getMagicResistence();
    int getSpeed();

    void setLife(int life);
    void setMana(int mana);
    void setAtackDamage(int atackDamage);
    void setAbilityPower(int abilityPower);
    void setArmor(int armor);
    void setMagicResistence(int magicResistence);
    void setSpeed(int speed);
};

#endif
