#include <Attribute.hpp>
#include <Globals.hpp>
#include <Item.hpp>

int INFINITY_EDGE[7] = {0, 0, 0, 0, 0, 0, 0};
int RABBADONS_DEATH_CAP[7] = {0, 0, 0, 0, 0, 0, 0};
int THORNMAIL[7] = {0, 0, 0, 0, 0, 0, 0};
int SPIRITY_VISAGE[7] = {0, 0, 0, 0, 0, 0, 0};
int WARMOGS_ARMOR[7] = {0, 0, 0, 0, 0, 0, 0};
int SERAPH_EMBRACE[7] = {0, 0, 0, 0, 0, 0, 0};
int BOOTS_SWIFTNESS[7] = {0, 0, 0, 0, 0, 0, 0};
int ADAPTIVE_HELM[7] = {0, 0, 0, 0, 0, 0, 0};
int BLADE_RUINED_KING[7] = {0, 0, 0, 0, 0, 0, 0};
int BLACK_CLEAVER[7] = {0, 0, 0, 0, 0, 0, 0};
int LIANDRY_TORNENT[7] = {0, 0, 0, 0, 0, 0, 0};
int BANSHEE_VEIL[7] = {0, 0, 0, 0, 0, 0, 0};
int RUNAANS_HURRICANE[7] = {0, 0, 0, 0, 0, 0, 0};
int TRINITY_FORCE[7] = {0, 0, 0, 0, 0, 0, 0};

Item::Item(string name) {
    if (name == "Infinity Edge") {
        this->id = 1;
        this->attribs = new Attribute(
            INFINITY_EDGE[0],
            INFINITY_EDGE[1],
            INFINITY_EDGE[2],
            INFINITY_EDGE[3],
            INFINITY_EDGE[4],
            INFINITY_EDGE[5],
            INFINITY_EDGE[6]);
    } else if (name == "Rabbadons") {
        this->id = 2;
        this->attribs = new Attribute(
            RABBADONS_DEATH_CAP[0],
            RABBADONS_DEATH_CAP[1],
            RABBADONS_DEATH_CAP[2],
            RABBADONS_DEATH_CAP[3],
            RABBADONS_DEATH_CAP[4],
            RABBADONS_DEATH_CAP[5],
            RABBADONS_DEATH_CAP[6]);
    } else if (name == "Thornmail") {
        this->id = 3;
        this->attribs = new Attribute(
            THORNMAIL[0],
            THORNMAIL[1],
            THORNMAIL[2],
            THORNMAIL[3],
            THORNMAIL[4],
            THORNMAIL[5],
            THORNMAIL[6]);
    } else if (name == "Spirity Visage") {
        this->id = 4;
        this->attribs = new Attribute(
            SPIRITY_VISAGE[0],
            SPIRITY_VISAGE[1],
            SPIRITY_VISAGE[2],
            SPIRITY_VISAGE[3],
            SPIRITY_VISAGE[4],
            SPIRITY_VISAGE[5],
            SPIRITY_VISAGE[6]);
    } else if (name == "Warmogs") {
        this->id = 5;
        this->attribs = new Attribute(
            WARMOGS_ARMOR[0],
            WARMOGS_ARMOR[1],
            WARMOGS_ARMOR[2],
            WARMOGS_ARMOR[3],
            WARMOGS_ARMOR[4],
            WARMOGS_ARMOR[5],
            WARMOGS_ARMOR[6]);
    } else if (name == "Seraph Embrace") {
        this->id = 6;
        this->attribs = new Attribute(
            SERAPH_EMBRACE[0],
            SERAPH_EMBRACE[1],
            SERAPH_EMBRACE[2],
            SERAPH_EMBRACE[3],
            SERAPH_EMBRACE[4],
            SERAPH_EMBRACE[5],
            SERAPH_EMBRACE[6]);
    } else if (name == "Boots") {
        this->id = 7;
        this->attribs = new Attribute(
            BOOTS_SWIFTNESS[0],
            BOOTS_SWIFTNESS[1],
            BOOTS_SWIFTNESS[2],
            BOOTS_SWIFTNESS[3],
            BOOTS_SWIFTNESS[4],
            BOOTS_SWIFTNESS[5],
            BOOTS_SWIFTNESS[6]);
    } else if (name == "Adaptive Helm") {
        this->id = 8;
        this->attribs = new Attribute(
            ADAPTIVE_HELM[0],
            ADAPTIVE_HELM[1],
            ADAPTIVE_HELM[2],
            ADAPTIVE_HELM[3],
            ADAPTIVE_HELM[4],
            ADAPTIVE_HELM[5],
            ADAPTIVE_HELM[6]);
    } else if (name == "Blade Ruined King") {
        this->id = 9;
        this->attribs = new Attribute(
            BLADE_RUINED_KING[0],
            BLADE_RUINED_KING[1],
            BLADE_RUINED_KING[2],
            BLADE_RUINED_KING[3],
            BLADE_RUINED_KING[4],
            BLADE_RUINED_KING[5],
            BLADE_RUINED_KING[6]);
    } else if (name == "Black Cleaver") {
        this->id = 10;
        this->attribs = new Attribute(
            BLACK_CLEAVER[0],
            BLACK_CLEAVER[1],
            BLACK_CLEAVER[2],
            BLACK_CLEAVER[3],
            BLACK_CLEAVER[4],
            BLACK_CLEAVER[5],
            BLACK_CLEAVER[6]);
    } else if (name == "Liandry") {
        this->id = 11;
        this->attribs = new Attribute(
            LIANDRY_TORNENT[0],
            LIANDRY_TORNENT[1],
            LIANDRY_TORNENT[2],
            LIANDRY_TORNENT[3],
            LIANDRY_TORNENT[4],
            LIANDRY_TORNENT[5],
            LIANDRY_TORNENT[6]);
    } else if (name == "Banshee") {
        this->id = 12;
        this->attribs = new Attribute(
            BANSHEE_VEIL[0],
            BANSHEE_VEIL[1],
            BANSHEE_VEIL[2],
            BANSHEE_VEIL[3],
            BANSHEE_VEIL[4],
            BANSHEE_VEIL[5],
            BANSHEE_VEIL[6]);
    } else if (name == "Runaans") {
        this->id = 13;
        this->attribs = new Attribute(
            RUNAANS_HURRICANE[0],
            RUNAANS_HURRICANE[1],
            RUNAANS_HURRICANE[2],
            RUNAANS_HURRICANE[3],
            RUNAANS_HURRICANE[4],
            RUNAANS_HURRICANE[5],
            RUNAANS_HURRICANE[6]);
    } else if (name == "Trynity Force") {
        this->id = 14;
        this->attribs = new Attribute(
            TRINITY_FORCE[0],
            TRINITY_FORCE[1],
            TRINITY_FORCE[2],
            TRINITY_FORCE[3],
            TRINITY_FORCE[4],
            TRINITY_FORCE[5],
            TRINITY_FORCE[6]);
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

Attribute* Item::getAttribs() {
    return this->attribs;
}