#include "../headers/Item.hpp"

// Regen de mana no auto ataque
// Implementar queimação de skills (dano de skills durante turnos)
int ITEMS[14][8] = {
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0}};

Item::Item(int itemId) {
    this->id = itemId;
    switch (itemId) {
        case INFINITY_EDGE:
            this->name = "Infinity Edge";
            this->attribs = new Attribute(
                ITEMS[INFINITY_EDGE][0], ITEMS[INFINITY_EDGE][1],
                ITEMS[INFINITY_EDGE][2], ITEMS[INFINITY_EDGE][3],
                ITEMS[INFINITY_EDGE][4], ITEMS[INFINITY_EDGE][5],
                ITEMS[INFINITY_EDGE][6], ITEMS[INFINITY_EDGE][7]);
            break;
        case RABBADONS_DEATH_CAP:
            this->name = "Rabbadons";
            this->attribs = new Attribute(
                ITEMS[RABBADONS_DEATH_CAP][0], ITEMS[RABBADONS_DEATH_CAP][1],
                ITEMS[RABBADONS_DEATH_CAP][2], ITEMS[RABBADONS_DEATH_CAP][3],
                ITEMS[RABBADONS_DEATH_CAP][4], ITEMS[RABBADONS_DEATH_CAP][5],
                ITEMS[RABBADONS_DEATH_CAP][6], ITEMS[RABBADONS_DEATH_CAP][7]);
            break;
        case THORNMAIL:
            this->name = "Thornmail";
            this->attribs = new Attribute(
                ITEMS[THORNMAIL][0], ITEMS[THORNMAIL][1],
                ITEMS[THORNMAIL][2], ITEMS[THORNMAIL][3],
                ITEMS[THORNMAIL][4], ITEMS[THORNMAIL][5],
                ITEMS[THORNMAIL][6], ITEMS[THORNMAIL][7]);
            break;
        case SPIRITY_VISAGE:
            this->name = "Spirity Visage";
            this->attribs = new Attribute(
                ITEMS[SPIRITY_VISAGE][0], ITEMS[SPIRITY_VISAGE][1],
                ITEMS[SPIRITY_VISAGE][2], ITEMS[SPIRITY_VISAGE][3],
                ITEMS[SPIRITY_VISAGE][4], ITEMS[SPIRITY_VISAGE][5],
                ITEMS[SPIRITY_VISAGE][6], ITEMS[SPIRITY_VISAGE][7]);
            break;
        case WARMOGS_ARMOR:
            this->name = "Warmogs";
            this->attribs = new Attribute(
                ITEMS[WARMOGS_ARMOR][0], ITEMS[WARMOGS_ARMOR][1],
                ITEMS[WARMOGS_ARMOR][2], ITEMS[WARMOGS_ARMOR][3],
                ITEMS[WARMOGS_ARMOR][4], ITEMS[WARMOGS_ARMOR][5],
                ITEMS[WARMOGS_ARMOR][6], ITEMS[WARMOGS_ARMOR][7]);
            break;
        case SERAPH_EMBRACE:
            this->name = "Seraph Embrace";
            this->attribs = new Attribute(
                ITEMS[SERAPH_EMBRACE][0], ITEMS[SERAPH_EMBRACE][1],
                ITEMS[SERAPH_EMBRACE][2], ITEMS[SERAPH_EMBRACE][3],
                ITEMS[SERAPH_EMBRACE][4], ITEMS[SERAPH_EMBRACE][5],
                ITEMS[SERAPH_EMBRACE][6], ITEMS[SERAPH_EMBRACE][7]);
            break;
        case BOOTS_SWIFTNESS:
            this->name = "Boots";
            this->attribs = new Attribute(
                ITEMS[BOOTS_SWIFTNESS][0], ITEMS[BOOTS_SWIFTNESS][1],
                ITEMS[BOOTS_SWIFTNESS][2], ITEMS[BOOTS_SWIFTNESS][3],
                ITEMS[BOOTS_SWIFTNESS][4], ITEMS[BOOTS_SWIFTNESS][5],
                ITEMS[BOOTS_SWIFTNESS][6], ITEMS[BOOTS_SWIFTNESS][7]);
            break;
        case REDEMPTION:
            this->name = "Redemption";
            this->attribs = new Attribute(
                ITEMS[REDEMPTION][0], ITEMS[REDEMPTION][1],
                ITEMS[REDEMPTION][2], ITEMS[REDEMPTION][3],
                ITEMS[REDEMPTION][4], ITEMS[REDEMPTION][5],
                ITEMS[REDEMPTION][6], ITEMS[REDEMPTION][7]);
            break;
        case BLADE_RUINED_KING:
            this->name = "Blade Ruined King";
            this->attribs = new Attribute(
                ITEMS[BLADE_RUINED_KING][0], ITEMS[BLADE_RUINED_KING][1],
                ITEMS[BLADE_RUINED_KING][2], ITEMS[BLADE_RUINED_KING][3],
                ITEMS[BLADE_RUINED_KING][4], ITEMS[BLADE_RUINED_KING][5],
                ITEMS[BLADE_RUINED_KING][6], ITEMS[BLADE_RUINED_KING][7]);
            break;
        case BLACK_CLEAVER:
            this->name = "Black Cleaver";
            this->attribs = new Attribute(
                ITEMS[BLACK_CLEAVER][0], ITEMS[BLACK_CLEAVER][1],
                ITEMS[BLACK_CLEAVER][2], ITEMS[BLACK_CLEAVER][3],
                ITEMS[BLACK_CLEAVER][4], ITEMS[BLACK_CLEAVER][5],
                ITEMS[BLACK_CLEAVER][6], ITEMS[BLACK_CLEAVER][7]);
            break;
        case LIANDRY_TORNENT:
            this->name = "Liandry";
            this->attribs = new Attribute(
                ITEMS[LIANDRY_TORNENT][0], ITEMS[LIANDRY_TORNENT][1],
                ITEMS[LIANDRY_TORNENT][2], ITEMS[LIANDRY_TORNENT][3],
                ITEMS[LIANDRY_TORNENT][4], ITEMS[LIANDRY_TORNENT][5],
                ITEMS[LIANDRY_TORNENT][6], ITEMS[LIANDRY_TORNENT][7]);
            break;
        case BANSHEE_VEIL:
            this->name = "Banshee";
            this->attribs = new Attribute(
                ITEMS[BANSHEE_VEIL][0], ITEMS[BANSHEE_VEIL][1],
                ITEMS[BANSHEE_VEIL][2], ITEMS[BANSHEE_VEIL][3],
                ITEMS[BANSHEE_VEIL][4], ITEMS[BANSHEE_VEIL][5],
                ITEMS[BANSHEE_VEIL][6], ITEMS[BANSHEE_VEIL][7]);
            break;
        case RUNAANS_HURRICANE:
            this->name = "Runaans";
            this->attribs = new Attribute(
                ITEMS[RUNAANS_HURRICANE][0], ITEMS[RUNAANS_HURRICANE][1],
                ITEMS[RUNAANS_HURRICANE][2], ITEMS[RUNAANS_HURRICANE][3],
                ITEMS[RUNAANS_HURRICANE][4], ITEMS[RUNAANS_HURRICANE][5],
                ITEMS[RUNAANS_HURRICANE][6], ITEMS[RUNAANS_HURRICANE][7]);
            break;
        case TRINITY_FORCE:
            this->name = "Trynity Force";
            this->attribs = new Attribute(
                ITEMS[TRINITY_FORCE][0], ITEMS[TRINITY_FORCE][1],
                ITEMS[TRINITY_FORCE][2], ITEMS[TRINITY_FORCE][3],
                ITEMS[TRINITY_FORCE][4], ITEMS[TRINITY_FORCE][5],
                ITEMS[TRINITY_FORCE][6], ITEMS[TRINITY_FORCE][7]);
            break;
    }
}

int Item::getId() {
    return this->id;
}

string Item::getName() {
    return this->name;
}

string Item::getDescription() {
    return this->description;
}

Attribute *Item::getAttribs() {
    return this->attribs;
}
int Item::getType() {
    return this->type;
}

void Item::applyItem(int &value, int &mana, set<string> &effects, bool &area, int turn) {
    int valueR = value;
    int manaR = mana;
    bool areaR = areaR;
    set<string> effectsR = effects;
    switch (this->id) {
        case INFINITY_EDGE: {
            if (turn % 2 == 0) valueR *= BUFF_TF;
            break;
        }
        case RABBADONS_DEATH_CAP: {
            valueR *= BUFF_RABBADODON;
            break;
        }
        case THORNMAIL: {
            valueR *= BUFF_THORNMAIL;
            break;
        }
        case SPIRITY_VISAGE: {
            valueR *= BUFF_SV;
            break;
        }
        case WARMOGS_ARMOR: {
            valueR = BUFF_WARMOG;
            break;
        }
        case SERAPH_EMBRACE: {
            manaR *= BUFF_SERAPH;
            break;
        }
        case BOOTS_SWIFTNESS: {
            int r = rand() % 100 + 1;
            if (r <= 20) valueR = 0;
            break;
        }
        case REDEMPTION: {
            if (turn % 5 == 0) valueR *= BUFF_REDEMPTION;
            break;
        }
        case BLADE_RUINED_KING: {
            valueR *= (1 + BUFF_RK * turn);
            break;
        }
        case BLACK_CLEAVER: {
            if (turn % 10 == 0) valueR *= 10;
            break;
        }
        case LIANDRY_TORNENT: {
            effectsR.insert("burn");
            break;
        }
        case BANSHEE_VEIL: {
            effectsR.clear();
            break;
        }
        case RUNAANS_HURRICANE: {
            bool areaR = true;
            break;
        }
    }
}