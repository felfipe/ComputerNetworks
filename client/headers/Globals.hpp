#ifndef GLOBAL_H
#define GLOBAL_H

#include <arpa/inet.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>

#include <cstdlib>
#include <iostream>
#include <set>
#include <string>
#include <thread>
#include <vector>

using namespace std;

// Champions
#define GAREN 0
#define DARIUS 1
#define LULU 2
#define RYZE 3
#define ASHE 4
#define TALON 5

// Items
#define INFINITY_EDGE 0
#define RABBADONS_DEATH_CAP 1
#define THORNMAIL 2
#define SPIRITY_VISAGE 3
#define WARMOGS_ARMOR 4
#define SERAPH_EMBRACE 5
#define BOOTS_SWIFTNESS 6
#define BLADE_RUINED_KING 7
#define BLACK_CLEAVER 8
#define LIANDRY_TORNENT 9
#define BANSHEE_VEIL 10
#define RUNAANS_HURRICANE 11
#define TRINITY_FORCE 12
#define REDEMPTION 13

#define MAX_ITEMS 2
#define MAX_NICKNAME 20

#endif