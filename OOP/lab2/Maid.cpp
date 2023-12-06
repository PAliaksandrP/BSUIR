#include "Maid.h"

Maid::Maid(string last_name, string first_name, bool sex, bool clothes_capacity, string location,string rang) :Person(last_name, first_name, sex, clothes_capacity, location) {
    this->rang_ = rang;
}

bool Maid::clean_room(Room& room) {
    if (room.capacity_) {
        room.capacity_ = false;
        return true;
    }
    else {
        return false;
    }
}

bool Maid::clean_clothes(Person& person) {
    if (person.clothes_capacity_) {
        person.clothes_capacity_ = false;
        return true;
    }
    else {
        return false;
    }
}