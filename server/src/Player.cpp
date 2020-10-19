#include <Champion.hpp>
#include <Globals.hpp>
#include <Player.hpp>

Player::Player(string name, Champion* champion) {
    this->champion = champion;
    this->name = name;
}
