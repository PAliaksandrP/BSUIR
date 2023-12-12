#include "visitor.h"

Visitor::Visitor(string last_name, string first_name, bool sex, bool clothes_poor, string location) :Person(last_name, first_name, sex, clothes_poor, location) {
}
Visitor::Visitor(){}

Visitor& Visitor::operator=(Visitor& other)
{   
 /*   this->clothes_poor_ = other.clothes_poor_;
    this->first_name_ = other.first_name_;
    this->last_name_ = other.last_name_;
    this->location_ = other.location_;
    this->sex_ = other.sex_;*/
    Person::operator=(other);
    this->room_number_ = other.room_number_;
    return *this;
}

int Visitor::get_room_number()
{
    return room_number_;
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

