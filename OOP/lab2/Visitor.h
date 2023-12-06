#pragma once

#include<iostream>
#include<string>
#include"Person.h"

using namespace std;
class Visitor : public Person {
public:
    int room_number_=0;
    Visitor(string last_name, string first_name, bool sex, bool clothes_capacity, string location); //: Person(last_name, first_name, sex, clothes_capacity, location, hotel);
    Visitor();
    Visitor& operator=(Visitor& other);
    bool order_room(int num_room);
    bool move_out();
};

