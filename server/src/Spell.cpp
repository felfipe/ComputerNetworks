#include <headers/Globals.hpp>

int GAREN[4][3] = {
    {0, 0, 0},
    {0, 0, 0},
    {0, 0, 0},
    {0, 0, 0}};

int DARIUS[4][3] = {
    {0, 0, 0},
    {0, 0, 0},
    {0, 0, 0},
    {0, 0, 0}};

int RYZE[4][3] = {
    {0, 0, 0},
    {0, 0, 0},
    {0, 0, 0},
    {0, 0, 0}};

int LUX[4][3] = {
    {0, 0, 0},
    {0, 0, 0},
    {0, 0, 0},
    {0, 0, 0}};

int ASHE[4][3] = {
    {0, 0, 0},
    {0, 0, 0},
    {0, 0, 0},
    {0, 0, 0}};

int VAYNE[4][3] = {
    {0, 0, 0},
    {0, 0, 0},
    {0, 0, 0},
    {0, 0, 0}};

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
        case 0:
            switch (spell) {
                case 0:
                    this->manaCost = GAREN[0][0];
                    this->type = GAREN[0][1];
                    this->value = GAREN[0][2];
                case 1:
                    this->manaCost = GAREN[1][0];
                    this->type = GAREN[1][1];
                    this->value = GAREN[1][2];
                case 2:
                    this->manaCost = GAREN[2][0];
                    this->type = GAREN[2][1];
                    this->value = GAREN[2][2];
                case 3:
                    this->manaCost = GAREN[3][0];
                    this->type = GAREN[3][1];
                    this->value = GAREN[3][2];
                    break;

                default:
                    break;
            }
            break;
        case 1:
            switch (spell) {
                case 0:
                    this->manaCost = DARIUS[0][0];
                    this->type = DARIUS[0][1];
                    this->value = DARIUS[0][2];
                case 1:
                    this->manaCost = DARIUS[1][0];
                    this->type = DARIUS[1][1];
                    this->value = DARIUS[1][2];
                case 2:
                    this->manaCost = DARIUS[2][0];
                    this->type = DARIUS[2][1];
                    this->value = DARIUS[2][2];
                case 3:
                    this->manaCost = DARIUS[3][0];
                    this->type = DARIUS[3][1];
                    this->value = DARIUS[3][2];
                    break;

                default:
                    break;
            }
            break;
        case 2:
            switch (spell) {
                case 0:
                    this->manaCost = RYZE[0][0];
                    this->type = RYZE[0][1];
                    this->value = RYZE[0][2];
                case 1:
                    this->manaCost = RYZE[1][0];
                    this->type = RYZE[1][1];
                    this->value = RYZE[1][2];
                case 2:
                    this->manaCost = RYZE[2][0];
                    this->type = RYZE[2][1];
                    this->value = RYZE[2][2];
                case 3:
                    this->manaCost = RYZE[3][0];
                    this->type = RYZE[3][1];
                    this->value = RYZE[3][2];
                    break;

                default:
                    break;
            }
            break;
        case 3:
            switch (spell) {
                case 0:
                    this->manaCost = LUX[0][0];
                    this->type = LUX[0][1];
                    this->value = LUX[0][2];
                case 1:
                    this->manaCost = LUX[1][0];
                    this->type = LUX[1][1];
                    this->value = LUX[1][2];
                case 2:
                    this->manaCost = LUX[2][0];
                    this->type = LUX[2][1];
                    this->value = LUX[2][2];
                case 3:
                    this->manaCost = LUX[3][0];
                    this->type = LUX[3][1];
                    this->value = LUX[3][2];
                    break;

                default:
                    break;
            }
            break;
        case 4:
            switch (spell) {
                case 0:
                    this->manaCost = ASHE[0][0];
                    this->type = ASHE[0][1];
                    this->value = ASHE[0][2];
                case 1:
                    this->manaCost = ASHE[1][0];
                    this->type = ASHE[1][1];
                    this->value = ASHE[1][2];
                case 2:
                    this->manaCost = ASHE[2][0];
                    this->type = ASHE[2][1];
                    this->value = ASHE[2][2];
                case 3:
                    this->manaCost = ASHE[3][0];
                    this->type = ASHE[3][1];
                    this->value = ASHE[3][2];
                    break;

                default:
                    break;
            }
            break;
        case 5:
            switch (spell) {
                case 0:
                    this->manaCost = VAYNE[0][0];
                    this->type = VAYNE[0][1];
                    this->value = VAYNE[0][2];
                case 1:
                    this->manaCost = VAYNE[1][0];
                    this->type = VAYNE[1][1];
                    this->value = VAYNE[1][2];
                case 2:
                    this->manaCost = VAYNE[2][0];
                    this->type = VAYNE[2][1];
                    this->value = VAYNE[2][2];
                case 3:
                    this->manaCost = VAYNE[3][0];
                    this->type = VAYNE[3][1];
                    this->value = VAYNE[3][2];
                    break;

                default:
                    break;
            }
            break;
    }
}