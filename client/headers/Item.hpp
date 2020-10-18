#ifndef ITEM_H
#define ITEM_H
#include <string>
using namespace std;
class Item
{
private:
    Attributes *attribs;
    string description;
    /* data */
public:
    Item(string description, Attributes *attribs);
};

#endif