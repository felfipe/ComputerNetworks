#ifndef GLOBALS_H
#define GLOBALS_H

// Cpp imports
#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

// Enuns
// Champions
#define GAREN 0
#define DARIUS 1
#define LULU 2
#define RYZE 3
#define ASHE 4
#define TALON 5

// Actions
#define SPELL_Q 0
#define SPELL_W 1
#define SPELL_E 2
#define SPELL_R 3
#define AA 4
#define SKIP 5

// Champion's type
#define TANK 1
#define ASSASSIN 2
#define ADCARRY 3
#define BRUISER 4
#define SUPPORT 5
#define CONTROL_MAGE 6

#define INFINITY_EDGE 0        // Buff no ataque basico -> 1.x * AD
#define RABBADONS_DEATH_CAP 1  // Buff nas skills -> 1.x * AP
#define THORNMAIL 2            // Buff -> Devolver 0.x do dano de ataques basicos recebido
#define SPIRITY_VISAGE 3       // Buff -> Aumenta cura em 1.x
#define WARMOGS_ARMOR 4        // Buff -> Regenera 0.x da vida por turno
#define SERAPH_EMBRACE 5       // Buff -> Reduz o casting de mana no uso de habilidades
#define BOOTS_SWIFTNESS 6      // Buff -> Chance de dodge em 0.x
#define BLADE_RUINED_KING 7    // Buff -> Dano baseado na vida maxima do alvo
#define BLACK_CLEAVER 8        // Buff -> Ignora 0.x da armadura do alvo
#define LIANDRY_TORNENT 9      // Buff -> Causa queimação nas skills baseado na vida maxima
#define BANSHEE_VEIL 10        // Buff -> Limpa os efeitos negativos a cada x turnos
#define RUNAANS_HURRICANE 11   // Buff -> Ataque basico da dano em area em 0.x do AD
#define TRINITY_FORCE 12       // Buff -> Ataques basicos em turnos pares dao 1.x do AD
#define REDEMPTION 13          // Buff -> Cura todos aliados em 0.x do AP a cada x turnos

#define BUFF_IE 1.5
#define BUFF_RABBADODON 1.4
#define BUFF_THORNMAIL 0.7
#define BUFF_SV 1.2
#define BUFF_WARMOG 50
#define BUFF_SERAPH 0.85
#define BUFF_BOOTS 0.2
#define BUFF_RK 0.05
#define BUFF_BC 30
#define BUFF_TF 2
#define BUFF_REDEMPTION 0.3

//item's type
#define ITEM_AUTO_ATTACK 0
#define ITEM_SPELL_DAMAGE 1
#define ITEM_SPELL_HEAL 2
#define ITEM_DEFENSE 3
#define ITEM_TURN 4

//spell's type
#define HEAL_SPELL 0
#define DAMAGE_SPELL 1

struct instruction {
    int type;
    int target;
};

struct status {
    int habilityPower;
    int atackDamage;
    int life;
    int mana;
    int armor;
    int medicResist;
    int your_turn;
};
struct moviment {
    int type;
    int value;
    bool areaEffect;
    set<string> effects;
    bool hasMana;
};
#endif