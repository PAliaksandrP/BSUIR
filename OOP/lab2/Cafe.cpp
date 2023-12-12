#include "cafe.h"

Cafe::Cafe(bool poor, int capacity, vector<string>menu, int number_tables) :Room(poor, capacity) {
	this->menu_ = menu;
	this->number_tables_ = number_tables;
}
Cafe::Cafe(){}
vector<string> Cafe::get_menu() {
	return menu_;
}
void Cafe::set_menu(string dish)
{
	menu_.push_back(dish);
}
void Cafe::del_menu(int n) {
	menu_.erase(menu_.begin() + n);
}
void Cafe::add_tables(int n) {
	number_tables_ += n;
}

int Cafe::get_tables()
{
	return number_tables_;
}

Cafe& Cafe::operator=(Cafe& other)
{
	this->capacity_ = other.capacity_;
	this->menu_ = other.menu_;
	this->number_tables_ = other.number_tables_;
	this->poor_ = other.poor_;
	return *this;
}
