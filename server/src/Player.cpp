#include "../headers/Player.hpp"

#define BASICATTACKMULTIPLIER 2
Player::Player(string nickname, int socket, int championId, int item1, int item2) {
    this->nickname = nickname;
    this->socket = socket;
    this->champion = new Champion(championId);
    this->champion->setItem(item1);
    this->champion->setItem(item2);
}

void Player::setDamage(vector<Champion *> champions, int action, int target, int turn) {
    int value = 0;
    int spellType;
    int itemType;
    int mana = 0;
    set<string> effects;
    bool areaEffect = false;

    // Jogada invalida
    if (action != AA and action != SPELL_Q and action != SPELL_W and action != SPELL_E and action != SPELL_R) return;

    if (action == AA) {
        value = BASICATTACKMULTIPLIER * this->champion->getAttribs()->getAttackDamage();
        itemType = ITEM_AUTO_ATTACK;
        this->champion->getAttribs()->setMana(this->champion->getAttribs()->getMana() + this->champion->getAttribs()->getRegenMana());
        this->champion->applyItems(itemType, mana, value, effects, areaEffect, turn);

        //montar o pacote de dano
        return;
    } else if (action == SPELL_Q || action == SPELL_W || action == SPELL_E || action == SPELL_R) {
        value = this->champion->getSpell(action)->getValue();
        spellType = this->champion->getSpell(action)->getType();
        mana = this->champion->getSpell(action)->getManaCost();
        effects.insert(this->champion->getSpell(action)->getEffect());
        if (spellType == DAMAGE_SPELL) {
            itemType = ITEM_SPELL_DAMAGE;
        } else if (spellType == HEAL_SPELL) {
            itemType = ITEM_SPELL_HEAL;
        }
        this->champion->applyItems(itemType, mana, value, effects, areaEffect, turn);  //ajustar para ponteiros o correto
        //agora os valores de value, effects e area Effect ja estão basta causa esse dano ao target ou aos targets
        //termina o ataque
    }
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