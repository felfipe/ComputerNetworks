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
    } else if (name == "Lux") {
        this->attribs = new Attribute(
            LUX[0], LUX[1],
            LUX[2], LUX[3],
            LUX[4], LUX[5],
            LUX[6]);
        this->type = "MAGE";
    } else if (name == "Ashe") {
        this->attribs = new Attribute(
            ASHE[0], ASHE[1],
            ASHE[2], ASHE[3],
            ASHE[4], ASHE[5],
            ASHE[6]);
        this->type = "RANGED";
    } else if (name == "Darius") {
        this->attribs = new Attribute(
            DARIUS[0], DARIUS[1],
            DARIUS[2], DARIUS[3],
            DARIUS[4], DARIUS[5],
            DARIUS[6]);
        this->type = "TANK";
    } else if (name == "Ryze") {
        this->attribs = new Attribute(
            RYZE[0], RYZE[1],
            RYZE[2], RYZE[3],
            RYZE[4], RYZE[5],
            RYZE[6]);
        this->type = "MAGE";
    } else if (name == "Vayne") {
        this->attribs = new Attribute(
            VAYNE[0], VAYNE[1],
            VAYNE[2], VAYNE[3],
            VAYNE[4], VAYNE[5],
            VAYNE[6]);
        this->type = "RANGED";
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

vector<Item> Champion::getItem() {
}