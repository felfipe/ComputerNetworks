#include "../headers/Player.hpp"

Player::Player(int id, string nickname, int championId, int itemId1, int itemId2) {
    this->id = id;
    this->active = true;
    this->nickname = nickname;
    this->champion = new Champion(championId);
    this->attribs = new Attribute(0, 0, 0, 0, 0, 0, 0, 0);
}

int Player::getId() {
    return this->id;
}

string Player::getNickname() {
    return this->nickname;
}

Champion* Player::getChampion() {
    return this->champion;
}

Attribute* Player::getAttribs() {
    return this->attribs;
}
void killPlayer() {
    this->active = false;
}