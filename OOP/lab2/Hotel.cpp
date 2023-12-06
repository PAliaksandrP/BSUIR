#include "Hotel.h"

Hotel::Hotel(int number_rooms, string name, vector<Hotel_room> hotel_rooms, vector<Room*> rooms,  vector<Person*> personals):
	number_rooms_(number_rooms),name_(name),hotel_rooms_(hotel_rooms),rooms_(rooms),personals_(personals)
{
}
Hotel::Hotel() {

}
Hotel& Hotel::operator=(Hotel& other)
{
	this->number_rooms_ = other.number_rooms_;
	this->name_ = other.name_;
	this->hotel_rooms_ = other.hotel_rooms_;
	this->rooms_ = other.rooms_;
	this->personals_ = other.personals_;
	return *this;
}
vector<Person*> Hotel::get_list_of_personal() {
	return personals_;
}
bool Hotel::add_personal(Person& personal) {
	personals_.push_back(&personal);
	return true;
}