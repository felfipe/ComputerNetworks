#include "../headers/Player.hpp"

Player::Player(int id, string nickname, int championId) {
    this->id = id;
    this->nickname = nickname;
    this->champion = new Champion(championId);
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