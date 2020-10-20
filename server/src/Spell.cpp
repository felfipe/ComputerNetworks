#include <headers/Globals.hpp>

int SPELLS[6][4][3] = {
    {{0, 0, 0},
     {0, 0, 0},
     {0, 0, 0},
     {0, 0, 0}},

    {{0, 0, 0},
     {0, 0, 0},
     {0, 0, 0},
     {0, 0, 0}},

    {{0, 0, 0},
     {0, 0, 0},
     {0, 0, 0},
     {0, 0, 0}},

    {{0, 0, 0},
     {0, 0, 0},
     {0, 0, 0},
     {0, 0, 0}},

    {{0, 0, 0},
     {0, 0, 0},
     {0, 0, 0},
     {0, 0, 0}},

    {{0, 0, 0},
     {0, 0, 0},
     {0, 0, 0},
     {0, 0, 0}}};

string Spell::getName() {
    return this->name;
}

string Spell::getEffect() {
    return this->effect;
}

string Spell::getType() {
    return this->type;
}

int Spell::getManaCost() {
    return this->manaCost;
}

int Spell::getValue() {
    return this->value;
}

Spell::Spell(int champion, int spell) {
    switch (champion) {
        case GAREN_:
            switch (spell) {
                case SPELL_Q:
                    this->manaCost = SPELLS[GAREN_][SPELL_Q][0];
                    this->type = SPELLS[GAREN_][SPELL_Q][1];
                    this->value = SPELLS[GAREN_][SPELL_Q][2];
                case SPELL_W:
                    this->manaCost = SPELLS[GAREN_][SPELL_W][0];
                    this->type = SPELLS[GAREN_][SPELL_W][1];
                    this->value = SPELLS[GAREN_][SPELL_W][2];
                case SPELL_E:
                    this->manaCost = SPELLS[GAREN_][SPELL_E][0];
                    this->type = SPELLS[GAREN_][SPELL_E][1];
                    this->value = SPELLS[GAREN_][SPELL_E][2];
                case SPELL_R:
                    this->manaCost = SPELLS[GAREN_][SPELL_R][0];
                    this->type = SPELLS[GAREN_][SPELL_R][1];
                    this->value = SPELLS[GAREN_][SPELL_R][2];
                    break;
            }
            break;
        case DARIUS_:
            switch (spell) {
                case SPELL_Q:
                    this->manaCost = SPELLS[DARIUS_][SPELL_Q][0];
                    this->type = SPELLS[DARIUS_][SPELL_Q][1];
                    this->value = SPELLS[DARIUS_][SPELL_Q][2];
                case SPELL_W:
                    this->manaCost = SPELLS[DARIUS_][SPELL_W][0];
                    this->type = SPELLS[DARIUS_][SPELL_W][1];
                    this->value = SPELLS[DARIUS_][SPELL_W][2];
                case SPELL_E:
                    this->manaCost = SPELLS[DARIUS_][SPELL_E][0];
                    this->type = SPELLS[DARIUS_][SPELL_E][1];
                    this->value = SPELLS[DARIUS_][SPELL_E][2];
                case SPELL_R:
                    this->manaCost = SPELLS[DARIUS_][SPELL_R][0];
                    this->type = SPELLS[DARIUS_][SPELL_R][1];
                    this->value = SPELLS[DARIUS_][SPELL_R][2];
                    break;
            }
            break;
        case RYZE_:
            switch (spell) {
                case SPELL_Q:
                    this->manaCost = SPELLS[RYZE_][SPELL_Q][0];
                    this->type = SPELLS[RYZE_][SPELL_Q][1];
                    this->value = SPELLS[RYZE_][SPELL_Q][2];
                case SPELL_W:
                    this->manaCost = SPELLS[RYZE_][SPELL_W][0];
                    this->type = SPELLS[RYZE_][SPELL_W][1];
                    this->value = SPELLS[RYZE_][SPELL_W][2];
                case SPELL_E:
                    this->manaCost = SPELLS[RYZE_][SPELL_E][0];
                    this->type = SPELLS[RYZE_][SPELL_E][1];
                    this->value = SPELLS[RYZE_][SPELL_E][2];
                case SPELL_R:
                    this->manaCost = SPELLS[RYZE_][SPELL_R][0];
                    this->type = SPELLS[RYZE_][SPELL_R][1];
                    this->value = SPELLS[RYZE_][SPELL_R][2];
                    break;
            }
            break;
        case LUX_:
            switch (spell) {
                case SPELL_Q:
                    this->manaCost = SPELLS[LUX_][SPELL_Q][0];
                    this->type = SPELLS[LUX_][SPELL_Q][1];
                    this->value = SPELLS[LUX_][SPELL_Q][2];
                case SPELL_W:
                    this->manaCost = SPELLS[LUX_][SPELL_W][0];
                    this->type = SPELLS[LUX_][SPELL_W][1];
                    this->value = SPELLS[LUX_][SPELL_W][2];
                case SPELL_E:
                    this->manaCost = SPELLS[LUX_][SPELL_E][0];
                    this->type = SPELLS[LUX_][SPELL_E][1];
                    this->value = SPELLS[LUX_][SPELL_E][2];
                case SPELL_R:
                    this->manaCost = SPELLS[LUX_][SPELL_R][0];
                    this->type = SPELLS[LUX_][SPELL_R][1];
                    this->value = SPELLS[LUX_][SPELL_R][2];
                    break;
            }
            break;
        case ASHE_:
            switch (spell) {
                case SPELL_Q:
                    this->manaCost = SPELLS[ASHE_][SPELL_Q][0];
                    this->type = SPELLS[ASHE_][SPELL_Q][1];
                    this->value = SPELLS[ASHE_][SPELL_Q][2];
                case SPELL_W:
                    this->manaCost = SPELLS[ASHE_][SPELL_W][0];
                    this->type = SPELLS[ASHE_][SPELL_W][1];
                    this->value = SPELLS[ASHE_][SPELL_W][2];
                case SPELL_E:
                    this->manaCost = SPELLS[ASHE_][SPELL_E][0];
                    this->type = SPELLS[ASHE_][SPELL_E][1];
                    this->value = SPELLS[ASHE_][SPELL_E][2];
                case SPELL_R:
                    this->manaCost = SPELLS[ASHE_][SPELL_R][0];
                    this->type = SPELLS[ASHE_][SPELL_R][1];
                    this->value = SPELLS[ASHE_][SPELL_R][2];
                    break;
            }
            break;
        case VAYNE_:
            switch (spell) {
                case SPELL_Q:
                    this->manaCost = SPELLS[VAYNE_][SPELL_Q][0];
                    this->type = SPELLS[VAYNE_][SPELL_Q][1];
                    this->value = SPELLS[VAYNE_][SPELL_Q][2];
                case SPELL_W:
                    this->manaCost = SPELLS[VAYNE_][SPELL_W][0];
                    this->type = SPELLS[VAYNE_][SPELL_W][1];
                    this->value = SPELLS[VAYNE_][SPELL_W][2];
                case SPELL_E:
                    this->manaCost = SPELLS[VAYNE_][SPELL_E][0];
                    this->type = SPELLS[VAYNE_][SPELL_E][1];
                    this->value = SPELLS[VAYNE_][SPELL_E][2];
                case SPELL_R:
                    this->manaCost = SPELLS[VAYNE_][SPELL_R][0];
                    this->type = SPELLS[VAYNE_][SPELL_R][1];
                    this->value = SPELLS[VAYNE_][SPELL_R][2];
                    break;
            }
            break;
    }
}