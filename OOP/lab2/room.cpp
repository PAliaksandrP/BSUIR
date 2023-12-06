#include "room.h"


Room::Room(bool poor, int capacity, Hotel hotel) {
	this->poor_ = poor;
	this->capacity_ = capacity;
	this->hotel_ = hotel;
}
Room::Room(){}