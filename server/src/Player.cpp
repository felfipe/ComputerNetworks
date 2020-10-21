#include "../headers/Player.hpp"

#define BASICATTACKMULTIPLIER 2
Player::Player(string nickname, int socket, int championId, int item1, int item2) {
    this->nickname = nickname;
    this->socket = socket;
    this->champion = new Champion(championId);
    this->champion->setItem(item1);
    this->champion->setItem(item2);
}

struct moviment Player::setDamage(int action, int turn) {
    int value = 0;
    int spellType;
    int itemType;
    int mana = 0;
    set<string> effects;
    bool areaEffect = false;
    struct moviment move;
    // Jogada invalida

    if (action == AA) {
        value = BASICATTACKMULTIPLIER * this->champion->getAttribs()->getAttackDamage();
        itemType = ITEM_AUTO_ATTACK;
        this->champion->getAttribs()->setMana(this->champion->getAttribs()->getMana() + this->champion->getAttribs()->getRegenMana());
        //this->champion->applyItems(itemType, mana, value, effects, areaEffect, turn);
        //montar o pacote de dano
        move.value = value;
        move.type = DAMAGE_SPELL;
        move.areaEffect = areaEffect;
        move.effects = effects;
    } else if (action == SPELL_Q || action == SPELL_W || action == SPELL_E || action == SPELL_R) {
        value = this->champion->getSpell(action)->getValue();
        spellType = this->champion->getSpell(action)->getType();
        mana = this->champion->getSpell(action)->getManaCost();
        effects.insert(this->champion->getSpell(action)->getEffect());
        if (spellType == DAMAGE_SPELL) {
            itemType = ITEM_SPELL_DAMAGE;
            move.type = DAMAGE_SPELL;
        } else if (spellType == HEAL_SPELL) {
            itemType = ITEM_SPELL_HEAL;
            move.type = HEAL_SPELL;
        }
        //this->champion->applyItems(itemType, mana, value, effects, areaEffect, turn);  //ajustar para ponteiros o correto
        move.value = value;
        move.areaEffect = areaEffect;
        move.effects = effects;
        //agora os valores de value, effects e area Effect ja estão basta causa esse dano ao target ou aos targets
        //termina o ataque
    }
    return move;
}

Champion *Player::getChampion() {
    return this->champion;
}

string Player::getNickname() {
    return this->nickname;
}

int Player::getSocket() {
    return this->socket;
}

void Player::setId(int id) {
    this->id = id;
}

int Player::getId() {
    return this->id;
}