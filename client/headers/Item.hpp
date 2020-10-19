#ifndef ITEM_H
#define ITEM_H
#include <string>
using namespace std;
class Item {
   private:
    int id;
    string name;
    string description;
    Attributes *attribs;
    /* data */
   public:
    Item(int id, string name, string description, Attributes *attribs);
    int getId();
    string getName();
    string getDescription();
    Attributes *getAttributes();
};

#endif