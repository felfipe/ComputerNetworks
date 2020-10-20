#include <headers/Globals.hpp>

int GAREN[7] = {0, 0, 0, 0, 0, 0, 0};
int DARIUS[7] = {0, 0, 0, 0, 0, 0, 0};
int LUX[7] = {0, 0, 0, 0, 0, 0, 0};
int ASHE[7] = {0, 0, 0, 0, 0, 0, 0};
int RYZE[7] = {0, 0, 0, 0, 0, 0, 0};
int VAYNE[7] = {0, 0, 0, 0, 0, 0, 0};

Champion::Champion(string name) {
    this->name = name;

    if (name == "Garen") {
        this->attribs = new Attribute(
            GAREN[0], GAREN[1],
            GAREN[2], GAREN[3],
            GAREN[4], GAREN[5],
            GAREN[6]);
        this->type = "TANK";
        this->spell[0] = new Spell(GAREN_, Q);
        this->spell[1] = new Spell(GAREN_, W);
        this->spell[2] = new Spell(GAREN_, E);
        this->spell[3] = new Spell(GAREN_, R);
    } else if (name == "Lux") {
        this->attribs = new Attribute(
            LUX[0], LUX[1],
            LUX[2], LUX[3],
            LUX[4], LUX[5],
            LUX[6]);
        this->type = "MAGE";
        this->spell[0] = new Spell(LUX_, Q);
        this->spell[1] = new Spell(LUX_, W);
        this->spell[2] = new Spell(LUX_, E);
        this->spell[3] = new Spell(LUX_, R);
    } else if (name == "Ashe") {
        this->attribs = new Attribute(
            ASHE[0], ASHE[1],
            ASHE[2], ASHE[3],
            ASHE[4], ASHE[5],
            ASHE[6]);
        this->type = "RANGED";
        this->spell[0] = new Spell(ASHE_, Q);
        this->spell[1] = new Spell(ASHE_, W);
        this->spell[2] = new Spell(ASHE_, E);
        this->spell[3] = new Spell(ASHE_, R);
    } else if (name == "Darius") {
        this->attribs = new Attribute(
            DARIUS[0], DARIUS[1],
            DARIUS[2], DARIUS[3],
            DARIUS[4], DARIUS[5],
            DARIUS[6]);
        this->type = "TANK";
        this->spell[0] = new Spell(DARIUS_, Q);
        this->spell[1] = new Spell(DARIUS_, W);
        this->spell[2] = new Spell(DARIUS_, E);
        this->spell[3] = new Spell(DARIUS_, R);
    } else if (name == "Ryze") {
        this->attribs = new Attribute(
            RYZE[0], RYZE[1],
            RYZE[2], RYZE[3],
            RYZE[4], RYZE[5],
            RYZE[6]);
        this->type = "MAGE";
        this->spell[0] = new Spell(RYZE_, Q);
        this->spell[1] = new Spell(RYZE_, W);
        this->spell[2] = new Spell(RYZE_, E);
        this->spell[3] = new Spell(RYZE_, R);
    } else if (name == "Vayne") {
        this->attribs = new Attribute(
            VAYNE[0], VAYNE[1],
            VAYNE[2], VAYNE[3],
            VAYNE[4], VAYNE[5],
            VAYNE[6]);
        this->type = "RANGED";
        this->spell[0] = new Spell(VAYNE_, Q);
        this->spell[1] = new Spell(VAYNE_, W);
        this->spell[2] = new Spell(VAYNE_, E);
        this->spell[3] = new Spell(VAYNE_, R);
    }
}

string Champion::getType() {
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
void Champion::applyItems(string type, int value, vector<string> effects) {
    int valueR;
    vector<string> effectsR;
    for (int i = 0; i < this->item.size(); i++) {
        if (item[i].getType() == type) {
            //Aplicar efeito de 1 item especifico
        }
    }
}