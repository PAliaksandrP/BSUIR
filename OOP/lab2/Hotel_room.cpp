#include "Hotel_room.h"

Hotel_room::Hotel_room(bool poor, int capacity,  int number, int type) :Room(poor, capacity) {
	this->number_ = number;
	this->type_ =choose_type(type);
	Visitor per("", "", false, false, "");
	this->visitor_ = per;
}
Hotel_room::Hotel_room() {

}
Hotel_room& Hotel_room::operator=(Hotel_room& other)
{
	this->type_ = other.type_;
	this->visitor_ = other.visitor_;
	this->poor_ = other.poor_;
	this->capacity_ = other.capacity_;
	return *this;
}
string Hotel_room::choose_type(int n) {
	switch (n) {
	case(1):type_ = "normal";
	case(2):type_ = "lux";
	default:type_ = "normal";
	}
	return type_;
}
string Hotel_room::get_visitor() {
	string name = visitor_.get_name();
	return name;
}

int Hotel_room::get_number()
{
	return number_;
}

bool Hotel_room::add_visitor(Visitor visitor)
{
	visitor_ = visitor;
	return true;
}

bool Hotel_room::remove_visitor()
{
	Visitor per("", "", false, false, "");
	visitor_ = per;
	return true;
}
