#include <Champion.hpp>
#include <Globals.hpp>
#include <Player.hpp>
#define BASICATTACKMULTIPLIER 2
Player::Player(string name, Champion *champion) {
}

void Player::setDamage(vector<Champion *> champions, int action, int alvo) {
    int value = 0;
    string type = "";
    vector<string> effects;
    bool areaEffect = false;
    if (action < 0) {        //Not Spells
        if (action == -1) {  //basic attack
            value = BASICATTACKMULTIPLIER * this->champion->attribs->attackDamage;
            //Aplicar efeito dos items de atack basico

            //montar o pacote de dano
            return
        }
        //value == 0 montar o pacote e pular a rodada
    } else {  //Spells
        //Neste caso action precisa ser um valor entre 0 e 3 representando o indice das skills
        if (action >= 4) {
            //montar o pacote de erro
            return
        } else {
            value = this->champion->spells[action].value;
            type = this->champion->spells[action].type;
            effects.push_back(this->champion->spells[action].effect);
            if (type == "damage") {
                //aplicar efeito dos itens enviando o parametro damage effects* e value*
                //montar o pacote com
                return
            } else if (type == "heal") {
                //aplicar o efeito dos itens enviar o parametro heal,effects* e value*
                return
            }
        }
    }
}
