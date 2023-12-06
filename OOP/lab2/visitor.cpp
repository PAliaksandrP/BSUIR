#include "visitor.h"


Visitor::Visitor(string last_name, string first_name, bool sex, bool clothes_capacity, string location, Hotel hotel,Hotel_room room,int room_number):Person(last_name, first_name, sex, clothes_capacity, location,  hotel) {
	this->room_ = room;
	this->room_number_ = room_number;
}
Visitor::Visitor(){}