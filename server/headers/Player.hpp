#ifndef PLAYER_H
#define PLAYER_H

class Player {
   private:
    string name;
    Champion* champion;

   public:
    Player(string name, Champion* champion);
    void getDamage();
    void setDamage(vector<Champion*> champions, int action);
};

#endif