#include <headers/Globals.hpp>

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
        case GAREN_:
            this->name = "Garen";
            this->attribs = new Attribute(
                CHAMPION[GAREN_][0], CHAMPION[GAREN_][1],
                CHAMPION[GAREN_][2], CHAMPION[GAREN_][3],
                CHAMPION[GAREN_][4], CHAMPION[GAREN_][5],
                CHAMPION[GAREN_][6]);
            this->type = TANK;
            this->spell[0] = new Spell(GAREN_, Q);
            this->spell[1] = new Spell(GAREN_, W);
            this->spell[2] = new Spell(GAREN_, E);
            this->spell[3] = new Spell(GAREN_, R);
            break;
        case DARIUS_:
            this->name = "Darius";
            this->attribs = new Attribute(
                CHAMPION[DARIUS_][0], CHAMPION[DARIUS_][1],
                CHAMPION[DARIUS_][2], CHAMPION[DARIUS_][3],
                CHAMPION[DARIUS_][4], CHAMPION[DARIUS_][5],
                CHAMPION[DARIUS_][6]);
            this->type = TANK;
            this->spell[0] = new Spell(DARIUS_, Q);
            this->spell[1] = new Spell(DARIUS_, W);
            this->spell[2] = new Spell(DARIUS_, E);
            this->spell[3] = new Spell(DARIUS_, R);
            break;
        case RYZE_:
            this->name = "Ryze";
            this->attribs = new Attribute(
                CHAMPION[RYZE_][0], CHAMPION[RYZE_][1],
                CHAMPION[RYZE_][2], CHAMPION[RYZE_][3],
                CHAMPION[RYZE_][4], CHAMPION[RYZE_][5],
                CHAMPION[RYZE_][6]);
            this->type = TANK;
            this->spell[0] = new Spell(RYZE_, Q);
            this->spell[1] = new Spell(RYZE_, W);
            this->spell[2] = new Spell(RYZE_, E);
            this->spell[3] = new Spell(RYZE_, R);
            break;
        case ASHE_:
            this->name = "Ashe";
            this->attribs = new Attribute(
                CHAMPION[ASHE_][0], CHAMPION[ASHE_][1],
                CHAMPION[ASHE_][2], CHAMPION[ASHE_][3],
                CHAMPION[ASHE_][4], CHAMPION[ASHE_][5],
                CHAMPION[ASHE_][6]);
            this->type = TANK;
            this->spell[0] = new Spell(ASHE_, Q);
            this->spell[1] = new Spell(ASHE_, W);
            this->spell[2] = new Spell(ASHE_, E);
            this->spell[3] = new Spell(ASHE_, R);
            break;
        case LUX_:
            this->name = "Lux";
            this->attribs = new Attribute(
                CHAMPION[LUX_][0], CHAMPION[LUX_][1],
                CHAMPION[LUX_][2], CHAMPION[LUX_][3],
                CHAMPION[LUX_][4], CHAMPION[LUX_][5],
                CHAMPION[LUX_][6]);
            this->type = TANK;
            this->spell[0] = new Spell(LUX_, Q);
            this->spell[1] = new Spell(LUX_, W);
            this->spell[2] = new Spell(LUX_, E);
            this->spell[3] = new Spell(LUX_, R);
            break;
        case VAYNE_:
            this->name = "Vayne";
            this->attribs = new Attribute(
                CHAMPION[VAYNE_][0], CHAMPION[VAYNE_][1],
                CHAMPION[VAYNE_][2], CHAMPION[VAYNE_][3],
                CHAMPION[VAYNE_][4], CHAMPION[VAYNE_][5],
                CHAMPION[VAYNE_][6]);
            this->type = TANK;
            this->spell[0] = new Spell(VAYNE_, Q);
            this->spell[1] = new Spell(VAYNE_, W);
            this->spell[2] = new Spell(VAYNE_, E);
            this->spell[3] = new Spell(VAYNE_, R);
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
void Champion::getHealed(int heal) {
    //aplicar os efeitos de items de HEAL
    this->getAttribs()->setLife(this->getAttribs()->getLife() + heal);
}
vector<Item> Champion::getItem() {
    return this->item;
}

Spell* Champion::getSpell(int idx) {
    return this->spell[idx];
}