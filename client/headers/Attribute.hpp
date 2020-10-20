#ifndef ATTRIBUTE_H
#define ATTRIBUTE_H

class Attribute {
   private:
    int life;
    int mana;
    int atackDamage;
    int abilityPower;
    int armor;
    int magicResistence;
    int speed;
    int regenMana;

   public:
    Attribute(int life, int atackDamage, int abilityPower, int armor, int magicResistence, int speed, int mana, int regenMana);
    int getLife();
    int getMana();
    int getAtackDamage();
    int getAbilityPower();
    int getArmor();
    int getMagicResistence();
    int getSpeed();
    int getRegenMana();

    void setLife(int life);
    void setMana(int mana);
    void setAtackDamage(int atackDamage);
    void setAbilityPower(int abilityPower);
    void setArmor(int armor);
    void setMagicResistence(int magicResistence);
    void setSpeed(int speed);
};

#endif
