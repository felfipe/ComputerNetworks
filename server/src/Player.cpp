#include <headers/Globals.hpp>

#define BASICATTACKMULTIPLIER 2
Player::Player(string name, Champion *champion) {
}

void Player::setDamage(vector<Champion *> champions, int action, int target) {
    int value = 0;
    string type = "";
    vector<string> effects;
    bool areaEffect = false;

    // Jogada invalida
    if (action != AA and action != SPELL_Q and action != SPELL_W and action != SPELL_E and action != SPELL_R) return;

    if (action == AA) {
        value = BASICATTACKMULTIPLIER * this->champion->getAttribs()->getAttackDamage();
        //Aplicar efeito dos items de atack basico

        //montar o pacote de dano
        return;
    } else if (action == SPELL_Q || action == SPELL_W || action == SPELL_E || action == SPELL_R) {
        value = this->champion->getSpell(action)->getValue();
        type = this->champion->getSpell(action)->getType();
        effects.push_back(this->champion->getSpell(action)->getEffect());
        if (type == "damage") {
            //aplicar efeito dos itens enviando o parametro damage effects* e value*
            //montar o pacote com
            return;
        } else if (type == "heal") {
            //aplicar o efeito dos itens enviar o parametro heal,effects* e value*
            return;
        }
    }
}

Champion *Player::getChampion() {
    return this->champion;
}
