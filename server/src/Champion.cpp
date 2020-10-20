#include "../headers/Champion.hpp"

// Ordem do ENUM de champions em Globals
int CHAMPION[6][7] = {
    {0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0}};

Champion::Champion(int champion) {
    switch (champion) {
        case GAREN:
            this->name = "Garen";
            this->attribs = new Attribute(
                CHAMPION[GAREN][0], CHAMPION[GAREN][1],
                CHAMPION[GAREN][2], CHAMPION[GAREN][3],
                CHAMPION[GAREN][4], CHAMPION[GAREN][5],
                CHAMPION[GAREN][6]);
            this->type = TANK;
            this->spell[0] = new Spell(GAREN, SPELL_Q);
            this->spell[1] = new Spell(GAREN, SPELL_W);
            this->spell[2] = new Spell(GAREN, SPELL_E);
            this->spell[3] = new Spell(GAREN, SPELL_R);
            break;
        case DARIUS:
            this->name = "Darius";
            this->attribs = new Attribute(
                CHAMPION[DARIUS][0], CHAMPION[DARIUS][1],
                CHAMPION[DARIUS][2], CHAMPION[DARIUS][3],
                CHAMPION[DARIUS][4], CHAMPION[DARIUS][5],
                CHAMPION[DARIUS][6]);
            this->type = TANK;
            this->spell[0] = new Spell(DARIUS, SPELL_Q);
            this->spell[1] = new Spell(DARIUS, SPELL_W);
            this->spell[2] = new Spell(DARIUS, SPELL_E);
            this->spell[3] = new Spell(DARIUS, SPELL_R);
            break;
        case RYZE:
            this->name = "Ryze";
            this->attribs = new Attribute(
                CHAMPION[RYZE][0], CHAMPION[RYZE][1],
                CHAMPION[RYZE][2], CHAMPION[RYZE][3],
                CHAMPION[RYZE][4], CHAMPION[RYZE][5],
                CHAMPION[RYZE][6]);
            this->type = TANK;
            this->spell[0] = new Spell(RYZE, SPELL_Q);
            this->spell[1] = new Spell(RYZE, SPELL_W);
            this->spell[2] = new Spell(RYZE, SPELL_E);
            this->spell[3] = new Spell(RYZE, SPELL_R);
            break;
        case ASHE:
            this->name = "Ashe";
            this->attribs = new Attribute(
                CHAMPION[ASHE][0], CHAMPION[ASHE][1],
                CHAMPION[ASHE][2], CHAMPION[ASHE][3],
                CHAMPION[ASHE][4], CHAMPION[ASHE][5],
                CHAMPION[ASHE][6]);
            this->type = TANK;
            this->spell[0] = new Spell(ASHE, SPELL_Q);
            this->spell[1] = new Spell(ASHE, SPELL_W);
            this->spell[2] = new Spell(ASHE, SPELL_E);
            this->spell[3] = new Spell(ASHE, SPELL_R);
            break;
        case LUX:
            this->name = "Lux";
            this->attribs = new Attribute(
                CHAMPION[LUX][0], CHAMPION[LUX][1],
                CHAMPION[LUX][2], CHAMPION[LUX][3],
                CHAMPION[LUX][4], CHAMPION[LUX][5],
                CHAMPION[LUX][6]);
            this->type = TANK;
            this->spell[0] = new Spell(LUX, SPELL_Q);
            this->spell[1] = new Spell(LUX, SPELL_W);
            this->spell[2] = new Spell(LUX, SPELL_E);
            this->spell[3] = new Spell(LUX, SPELL_R);
            break;
        case VAYNE:
            this->name = "Vayne";
            this->attribs = new Attribute(
                CHAMPION[VAYNE][0], CHAMPION[VAYNE][1],
                CHAMPION[VAYNE][2], CHAMPION[VAYNE][3],
                CHAMPION[VAYNE][4], CHAMPION[VAYNE][5],
                CHAMPION[VAYNE][6]);
            this->type = TANK;
            this->spell[0] = new Spell(VAYNE, SPELL_Q);
            this->spell[1] = new Spell(VAYNE, SPELL_W);
            this->spell[2] = new Spell(VAYNE, SPELL_E);
            this->spell[3] = new Spell(VAYNE, SPELL_R);
            break;
    }
}

int Champion::getType() {
    return this->type;
}

string Champion::getName() {
    return this->name;
}

Attribute* Champion::getAttribs() {
    return this->attribs;
}

void Champion::getDamage(int value, vector<string> effects) {
    int damage = value;
    //metodo para aplicador efeito dos itens de DEFESA e alterar o value
    this->getAttribs()->setLife(this->getAttribs()->getLife() - damage);
    this->setEffects(effects);
}

void Champion::setEffects(vector<string> effects) {
}

void Champion::getHealed(int heal) {
    //aplicar os efeitos de items de HEAL
    this->getAttribs()->setLife(this->getAttribs()->getLife() + heal);
}

vector<Item*> Champion::getItem() {
    return this->item;
}

Spell* Champion::getSpell(int idx) {
    return this->spell[idx];
}

void Champion::setItem(int itemId) {
    Item* item = new Item(itemId);
    this->getAttribs()->setAbilityPower(item->getAttribs()->getAbilityPower());
    this->getAttribs()->setArmor(item->getAttribs()->getArmor());
    this->getAttribs()->setAttackDamage(item->getAttribs()->getAttackDamage());
    this->getAttribs()->setLife(item->getAttribs()->getLife());
    this->getAttribs()->setMagicResist(item->getAttribs()->getMagicResist());
    this->getAttribs()->setMana(item->getAttribs()->getMana());
    this->getAttribs()->setSpeed(item->getAttribs()->getSpeed());
    this->item.push_back(item);
}

// attack or defense
void Champion::applyItems(int type, int mana, int value, set<string> effects, bool areaEffects, int turn) {
    int valueR;
    vector<string> effectsR;
    for (int i = 0; i < this->item.size(); i++) {
        if (item[i]->getType() == type) {
            item[i]->applyItem(value, mana, effects, areaEffects, turn);
            //Aplicar efeito de 1 item especifico
        }
    }
}