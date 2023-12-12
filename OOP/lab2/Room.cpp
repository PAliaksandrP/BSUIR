#include "room.h"

Room::Room(bool poor, int capacity) {
	poor_ = poor;
	capacity_ = capacity;
}
Room::Room(){}

Room& Room::operator=(Room& other)
{
	this->capacity_ =other.capacity_;
	this->poor_ = other.poor_;
	return *this;
}

int Room::get_capacity() {
	return capacity_;
}