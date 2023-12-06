#include "Administrator.h"

Administrator::Administrator(string last_name, string first_name, bool sex, bool clothes_capacity, string location,  string rang,Hotel hotel) :Person(last_name, first_name, sex, clothes_capacity, location) {
	this->rang_ = rang;
	this->hotel_ = hotel;
}
bool Administrator::invite(Visitor visitor, int number) {
	for (int i = 0; i < hotel_.hotel_rooms_.size(); i++) {
		if (hotel_.hotel_rooms_[i].number_ == number) {
			if (hotel_.hotel_rooms_[i].get_visitor() == " ") {
				hotel_.hotel_rooms_[i].add_visitor(visitor);
				visitor.order_room(number);
				return true;
			}
			else { return false; }
		}
	}
	return false;
}

bool Administrator::remove(Visitor visitor, int number)
{
	for (int i = 0; i < hotel_.hotel_rooms_.size(); i++) {
		if (hotel_.hotel_rooms_[i].number_ == number) {
			if (hotel_.hotel_rooms_[i].get_visitor() != " ") {
				visitor.move_out();
				return hotel_.hotel_rooms_[i].remove_visitor();
			}
		}
	}
	return false;
}
