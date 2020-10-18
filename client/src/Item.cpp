#include <Attributes.hpp>
#include <Item.hpp>

Item::Item(string description, Attributes *attribs) {
    this->attribs = attribs;
    this->description = description;
}