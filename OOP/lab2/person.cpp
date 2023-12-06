#include "person.h"

using namespace std;
Person::Person(string last_name, string first_name, bool sex, bool clothes_capacity, string location, Hotel hotel) {
    this->last_name_ = last_name;
    this->first_name_ = first_name;
    this->sex_ = sex;
    this->clothes_capacity_ = clothes_capacity;
    this->location_ = location;
    this->hotel_ = hotel;
}
Person::Person(){}
void Person::reset_place() {
    string new_place;
    cin >> new_place;
    location_ = new_place;
}
string Person::say_name() {
    return last_name_ + " " + first_name_;
};