#include "visitor.h"

Visitor::Visitor(string last_name, string first_name, bool sex, bool clothes_capacity, string location) :Person(last_name, first_name, sex, clothes_capacity, location) {
}
Visitor::Visitor(){}

Visitor& Visitor::operator=(Visitor& other)
{
    this->clothes_capacity_ = other.clothes_capacity_;
    this->first_name_ = other.first_name_;
    this->last_name_ = other.last_name_;
    this->location_ = other.location_;
    this->sex_ = other.sex_;
    this->room_number_ = other.room_number_;
    return *this;
}

bool Visitor::order_room(int num_room)
{
    room_number_ = num_room;
    return true;
}

bool Visitor::move_out()
{
    room_number_ = 0;
    return true;
}

