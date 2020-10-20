#ifndef PLAYER_H
#define PLAYER_H

class Player {
   private:
    string nickname;
    Champion* champion;

   public:
    Player(string nickname, int champion, int item1, int item2);
    Champion* getChampion();
    void setDamage(vector<Champion*> champions, int action, int target);
};

#endif