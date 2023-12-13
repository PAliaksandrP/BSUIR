#pragma once
#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string last_name_;
    string first_name_;
    bool sex_;
    string location_;
//protected:
//    string rang_;
public:
    bool clothes_poor_;
    //Person(string last_name, string first_name, bool sex, bool clothes_capacity, string location);
    Person(const string& last_name_, const string& first_name_, bool sex_, bool clothes_poor_, const string& location_);
    Person();
    Person& operator =(Person& other);
    string get_name();
    /*string get_rang();*/
    string get_location();
    bool get_sex();
    bool reset_place(string new_place);
};

