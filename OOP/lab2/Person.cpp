#include "person.h"


/*Person::Person(string last_name, string first_name, bool sex, bool clothes_capacity, string location) {
    last_name_ = last_name;
    first_name_ = first_name;
    sex_ = sex;
    clothes_capacity_ = clothes_capacity;
    location_ = location;
}*/
Person::Person(){}
Person& Person::operator=(Person& other)
{
    this->clothes_capacity_ = other.clothes_capacity_;
    this->first_name_ = other.first_name_;
    this->last_name_ = other.last_name_;
    this->location_ = other.location_;
    this->sex_ = other.sex_;
    this->rang_ = other.rang_;
    return *this;
}
bool Person::reset_place(string new_place) {
  /*  string new_place;
    cin >> new_place;*/
    location_ = new_place;
    return true;
}
string Person::say_name() {
    return last_name_ + " " + first_name_;
};

Person::Person(const string& last_name_, const string& first_name_, bool sex_, bool clothes_capacity_, const string& location_ )
    : last_name_(last_name_), first_name_(first_name_), sex_(sex_), clothes_capacity_(clothes_capacity_), location_(location_)
{
    string rang_ = "";
}
