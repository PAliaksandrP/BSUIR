#include "administrator.h"

Administrator::Administrator(string last_name, string first_name, bool sex, bool clothes_capacity, string location, Hotel hotel, string rang) :Person(last_name, first_name, sex, clothes_capacity, location, hotel) {
	this->rang_ = rang;
}
bool Administrator::invite(Hotel_room room, Visitor visitor, int number) {

}