#pragma once
#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string last_name_;
    string first_name_;
    bool sex_;
    bool clothes_capacity_;
    string location_;
    string rang_;
    //Person(string last_name, string first_name, bool sex, bool clothes_capacity, string location);
    Person(const string& last_name_, const string& first_name_, bool sex_, bool clothes_capacity_, const string& location_);
    Person();
    Person& operator =(Person& other);
    string say_name();
    bool reset_place(string new_place);
};

