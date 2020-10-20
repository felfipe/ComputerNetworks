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