#include "../headers/Spell.hpp"

int SPELLS[6][4][3] = {
    {{015, 0, 15},
     {075, 1, 30},
     {005, 0, 05},
     {120, 0, 60}},

    {{60, 1, 45},
     {75, 0, 50},
     {80, 0, 60},
     {85, 0, 75}},

    {{035, 1, 60},
     {040, 1, 75},
     {020, 0, 25},
     {100, 1, 100}},

    {{20, 1, 40},
     {15, 0, 40},
     {35, 0, 70},
     {55, 0, 100}},

    {{130, 0, 50},
     {100, 0, 40},
     {045, 1, 35},
     {120, 0, 85}},

    {{65, 0, 40},
     {55, 0, 35},
     {85, 0, 55},
     {180, 0, 120}}};

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
        case LULU:
            switch (spell) {
                case SPELL_Q:
                    this->manaCost = SPELLS[LULU][SPELL_Q][0];
                    this->type = SPELLS[LULU][SPELL_Q][1];
                    this->value = SPELLS[LULU][SPELL_Q][2];
                case SPELL_W:
                    this->manaCost = SPELLS[LULU][SPELL_W][0];
                    this->type = SPELLS[LULU][SPELL_W][1];
                    this->value = SPELLS[LULU][SPELL_W][2];
                case SPELL_E:
                    this->manaCost = SPELLS[LULU][SPELL_E][0];
                    this->type = SPELLS[LULU][SPELL_E][1];
                    this->value = SPELLS[LULU][SPELL_E][2];
                case SPELL_R:
                    this->manaCost = SPELLS[LULU][SPELL_R][0];
                    this->type = SPELLS[LULU][SPELL_R][1];
                    this->value = SPELLS[LULU][SPELL_R][2];
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
        case TALON:
            switch (spell) {
                case SPELL_Q:
                    this->manaCost = SPELLS[TALON][SPELL_Q][0];
                    this->type = SPELLS[TALON][SPELL_Q][1];
                    this->value = SPELLS[TALON][SPELL_Q][2];
                case SPELL_W:
                    this->manaCost = SPELLS[TALON][SPELL_W][0];
                    this->type = SPELLS[TALON][SPELL_W][1];
                    this->value = SPELLS[TALON][SPELL_W][2];
                case SPELL_E:
                    this->manaCost = SPELLS[TALON][SPELL_E][0];
                    this->type = SPELLS[TALON][SPELL_E][1];
                    this->value = SPELLS[TALON][SPELL_E][2];
                case SPELL_R:
                    this->manaCost = SPELLS[TALON][SPELL_R][0];
                    this->type = SPELLS[TALON][SPELL_R][1];
                    this->value = SPELLS[TALON][SPELL_R][2];
                    break;
            }
            break;
    }
}