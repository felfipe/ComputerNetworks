#include "../headers/Champion.hpp"

int CHAMPION[6][8] = {
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0}};

Champion::Champion(int champion) {
    this->id = champion;
    switch (champion) {
        case GAREN:
            this->name = "Garen";
            this->attribs = new Attribute(
                CHAMPION[GAREN][0], CHAMPION[GAREN][1],
                CHAMPION[GAREN][2], CHAMPION[GAREN][3],
                CHAMPION[GAREN][4], CHAMPION[GAREN][5],
                CHAMPION[GAREN][6], CHAMPION[GAREN][7]);
            this->type = TANK;
            break;
        case DARIUS:
            this->name = "Darius";

            this->attribs = new Attribute(
                CHAMPION[DARIUS][0], CHAMPION[DARIUS][1],
                CHAMPION[DARIUS][2], CHAMPION[DARIUS][3],
                CHAMPION[DARIUS][4], CHAMPION[DARIUS][5],
                CHAMPION[DARIUS][6], CHAMPION[DARIUS][7]);
            this->type = BRUISER;
            break;
        case RYZE:
            this->name = "Ryze";
            this->attribs = new Attribute(
                CHAMPION[RYZE][0], CHAMPION[RYZE][1],
                CHAMPION[RYZE][2], CHAMPION[RYZE][3],
                CHAMPION[RYZE][4], CHAMPION[RYZE][5],
                CHAMPION[RYZE][6], CHAMPION[RYZE][7]);
            this->type = CONTROL_MAGE;
            break;
        case ASHE:
            this->name = "Ashe";
            this->attribs = new Attribute(
                CHAMPION[ASHE][0], CHAMPION[ASHE][1],
                CHAMPION[ASHE][2], CHAMPION[ASHE][3],
                CHAMPION[ASHE][4], CHAMPION[ASHE][5],
                CHAMPION[ASHE][6], CHAMPION[ASHE][7]);
            this->type = ADCARRY;

            break;
        case LULU:
            this->name = "LULU";
            this->attribs = new Attribute(
                CHAMPION[LULU][0], CHAMPION[LULU][1],
                CHAMPION[LULU][2], CHAMPION[LULU][3],
                CHAMPION[LULU][4], CHAMPION[LULU][5],
                CHAMPION[LULU][6], CHAMPION[LULU][7]);
            this->type = SUPPORT;
            break;
        case TALON:
            this->name = "TALON";
            this->attribs = new Attribute(
                CHAMPION[TALON][0], CHAMPION[TALON][1],
                CHAMPION[TALON][2], CHAMPION[TALON][3],
                CHAMPION[TALON][4], CHAMPION[TALON][5],
                CHAMPION[TALON][6], CHAMPION[TALON][7]);
            this->type = ASSASSIN;
            break;
    }
}

string Champion::getName() {
    return this->name;
}

int Champion::getType() {
    return this->type;
}

void Champion::setAttribute(Attribute *attribs) {
    this->attribs = attribs;
}