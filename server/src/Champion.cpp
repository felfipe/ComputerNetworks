#include <Attribute.hpp>
#include <Champion.hpp>
#include <Globals.hpp>

int A_GAREN[6] = {0, 0, 0, 0, 0, 0};
int A_DARIUS[6] = {0, 0, 0, 0, 0, 0};
int A_LUX[6] = {0, 0, 0, 0, 0, 0};
int A_ASHE[6] = {0, 0, 0, 0, 0, 0};
int A_RYZE[6] = {0, 0, 0, 0, 0, 0};
int A_VAYNE[6] = {0, 0, 0, 0, 0, 0};

Champion::Champion(string name) {
    this->name = name;

    if (name == "Garen") {
        this->attribs = new Attribute(A_GAREN[0], A_GAREN[1], A_GAREN[2], A_GAREN[3], A_GAREN[4], A_GAREN[5]);
        this->type = "TANK";
    } else if (name == "Lux") {
        this->attribs = new Attribute(A_LUX[0], A_LUX[1], A_LUX[2], A_LUX[3], A_LUX[4], A_LUX[5]);
        this->type = "MAGE";
    } else if (name == "Ashe") {
        this->attribs = new Attribute(A_ASHE[0], A_ASHE[1], A_ASHE[2], A_ASHE[3], A_ASHE[4], A_ASHE[5]);
        this->type = "RANGED";
    } else if (name == "Darius") {
        this->attribs = new Attribute(A_DARIUS[0], A_DARIUS[1], A_DARIUS[2], A_DARIUS[3], A_DARIUS[4], A_DARIUS[5]);
        this->type = "TANK";
    } else if (name == "Ryze") {
        this->attribs = new Attribute(A_RYZE[0], A_RYZE[1], A_RYZE[2], A_RYZE[3], A_RYZE[4], A_RYZE[5]);
        this->type = "MAGE";
    } else if (name == "Vayne") {
        this->attribs = new Attribute(A_VAYNE[0], A_VAYNE[1], A_VAYNE[2], A_VAYNE[3], A_VAYNE[4], A_VAYNE[5]);
        this->type = "RANGED";
    }
}

string Champion::getType() {
    return this->type;
}