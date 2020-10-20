#include "../headers/Spell.hpp"

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

int Spell::getType() {
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
        case GAREN:
            switch (spell) {
                case SPELL_Q:
                    this->manaCost = SPELLS[GAREN][SPELL_Q][0];
                    this->type = SPELLS[GAREN][SPELL_Q][1];
                    this->value = SPELLS[GAREN][SPELL_Q][2];
                case SPELL_W:
                    this->manaCost = SPELLS[GAREN][SPELL_W][0];
                    this->type = SPELLS[GAREN][SPELL_W][1];
                    this->value = SPELLS[GAREN][SPELL_W][2];
                case SPELL_E:
                    this->manaCost = SPELLS[GAREN][SPELL_E][0];
                    this->type = SPELLS[GAREN][SPELL_E][1];
                    this->value = SPELLS[GAREN][SPELL_E][2];
                case SPELL_R:
                    this->manaCost = SPELLS[GAREN][SPELL_R][0];
                    this->type = SPELLS[GAREN][SPELL_R][1];
                    this->value = SPELLS[GAREN][SPELL_R][2];
                    break;
            }
            break;
        case DARIUS:
            switch (spell) {
                case SPELL_Q:
                    this->manaCost = SPELLS[DARIUS][SPELL_Q][0];
                    this->type = SPELLS[DARIUS][SPELL_Q][1];
                    this->value = SPELLS[DARIUS][SPELL_Q][2];
                case SPELL_W:
                    this->manaCost = SPELLS[DARIUS][SPELL_W][0];
                    this->type = SPELLS[DARIUS][SPELL_W][1];
                    this->value = SPELLS[DARIUS][SPELL_W][2];
                case SPELL_E:
                    this->manaCost = SPELLS[DARIUS][SPELL_E][0];
                    this->type = SPELLS[DARIUS][SPELL_E][1];
                    this->value = SPELLS[DARIUS][SPELL_E][2];
                case SPELL_R:
                    this->manaCost = SPELLS[DARIUS][SPELL_R][0];
                    this->type = SPELLS[DARIUS][SPELL_R][1];
                    this->value = SPELLS[DARIUS][SPELL_R][2];
                    break;
            }
            break;
        case RYZE:
            switch (spell) {
                case SPELL_Q:
                    this->manaCost = SPELLS[RYZE][SPELL_Q][0];
                    this->type = SPELLS[RYZE][SPELL_Q][1];
                    this->value = SPELLS[RYZE][SPELL_Q][2];
                case SPELL_W:
                    this->manaCost = SPELLS[RYZE][SPELL_W][0];
                    this->type = SPELLS[RYZE][SPELL_W][1];
                    this->value = SPELLS[RYZE][SPELL_W][2];
                case SPELL_E:
                    this->manaCost = SPELLS[RYZE][SPELL_E][0];
                    this->type = SPELLS[RYZE][SPELL_E][1];
                    this->value = SPELLS[RYZE][SPELL_E][2];
                case SPELL_R:
                    this->manaCost = SPELLS[RYZE][SPELL_R][0];
                    this->type = SPELLS[RYZE][SPELL_R][1];
                    this->value = SPELLS[RYZE][SPELL_R][2];
                    break;
            }
            break;
        case LUX:
            switch (spell) {
                case SPELL_Q:
                    this->manaCost = SPELLS[LUX][SPELL_Q][0];
                    this->type = SPELLS[LUX][SPELL_Q][1];
                    this->value = SPELLS[LUX][SPELL_Q][2];
                case SPELL_W:
                    this->manaCost = SPELLS[LUX][SPELL_W][0];
                    this->type = SPELLS[LUX][SPELL_W][1];
                    this->value = SPELLS[LUX][SPELL_W][2];
                case SPELL_E:
                    this->manaCost = SPELLS[LUX][SPELL_E][0];
                    this->type = SPELLS[LUX][SPELL_E][1];
                    this->value = SPELLS[LUX][SPELL_E][2];
                case SPELL_R:
                    this->manaCost = SPELLS[LUX][SPELL_R][0];
                    this->type = SPELLS[LUX][SPELL_R][1];
                    this->value = SPELLS[LUX][SPELL_R][2];
                    break;
            }
            break;
        case ASHE:
            switch (spell) {
                case SPELL_Q:
                    this->manaCost = SPELLS[ASHE][SPELL_Q][0];
                    this->type = SPELLS[ASHE][SPELL_Q][1];
                    this->value = SPELLS[ASHE][SPELL_Q][2];
                case SPELL_W:
                    this->manaCost = SPELLS[ASHE][SPELL_W][0];
                    this->type = SPELLS[ASHE][SPELL_W][1];
                    this->value = SPELLS[ASHE][SPELL_W][2];
                case SPELL_E:
                    this->manaCost = SPELLS[ASHE][SPELL_E][0];
                    this->type = SPELLS[ASHE][SPELL_E][1];
                    this->value = SPELLS[ASHE][SPELL_E][2];
                case SPELL_R:
                    this->manaCost = SPELLS[ASHE][SPELL_R][0];
                    this->type = SPELLS[ASHE][SPELL_R][1];
                    this->value = SPELLS[ASHE][SPELL_R][2];
                    break;
            }
            break;
        case VAYNE:
            switch (spell) {
                case SPELL_Q:
                    this->manaCost = SPELLS[VAYNE][SPELL_Q][0];
                    this->type = SPELLS[VAYNE][SPELL_Q][1];
                    this->value = SPELLS[VAYNE][SPELL_Q][2];
                case SPELL_W:
                    this->manaCost = SPELLS[VAYNE][SPELL_W][0];
                    this->type = SPELLS[VAYNE][SPELL_W][1];
                    this->value = SPELLS[VAYNE][SPELL_W][2];
                case SPELL_E:
                    this->manaCost = SPELLS[VAYNE][SPELL_E][0];
                    this->type = SPELLS[VAYNE][SPELL_E][1];
                    this->value = SPELLS[VAYNE][SPELL_E][2];
                case SPELL_R:
                    this->manaCost = SPELLS[VAYNE][SPELL_R][0];
                    this->type = SPELLS[VAYNE][SPELL_R][1];
                    this->value = SPELLS[VAYNE][SPELL_R][2];
                    break;
            }
            break;
    }
}