#include "hotel_room.h"

Hotel_room::Hotel_room(bool poor, int capacity, Hotel hotel, int number, string type, Visitor visitor):Room(poor,capacity,hotel) {
	this->number_ = number;
	this->type_ = type;
	this->visitor_ = visitor;
}
Hotel_room::Hotel_room() {

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
	string name = visitor_.last_name_ + " " + visitor_.first_name_;
	return name;
}