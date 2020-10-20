#include "../headers/Item.hpp"

Item::Item(int id, string name, string description, Attributes* attribs) {
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
Attributes* Item::getAttributes() {
    return this->attribs;
}
