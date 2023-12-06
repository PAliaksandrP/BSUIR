#include "hotel.h"

Hotel::Hotel(int number_rooms, string name, vector<Hotel_room> hotel_rooms, vector<Room>rooms, vector<Visitor> visitors, vector<Person> personals) {
    number_rooms_ = number_rooms;
    name_ = name; 
	hotel_rooms_ = hotel_rooms;
	rooms_ = rooms;
	visitors_ = visitors;
	personals_ = personals;
}
Hotel::Hotel() {

}
vector<Person> Hotel::get_list_of_personal() {
	return personals_;
}
bool Hotel::add_personal(Person personal) {
	personals_.push_back(personal);
	return true;
}