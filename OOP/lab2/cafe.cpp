#include "cafe.h"

Cafe::Cafe(bool poor, int capacity, Hotel hotel, vector<string>menu, int number_tables):Room(poor,capacity,hotel){
	this->menu_ = menu;
	this->number_tables_ = number_tables;
}
vector<string> Cafe::get_menu() {
	return menu_;
}
bool Cafe::add_tables(int n) {
	number_tables_ += n;
	return true;
}