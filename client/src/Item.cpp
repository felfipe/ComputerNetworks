#include "../headers/Item.hpp"

Item::Item(int id, string name, string description, Attribute* attribs) {
    this->attribs = attribs;
    this->description = description;
}
int Item::getId() {
    return this->id;
}
string Item::getName() {
    return this->name;
}
string Item::getDescription() {
    return this->description;
}
Attribute* Item::getAttribute() {
    return this->attribs;
}
