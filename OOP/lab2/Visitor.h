#pragma once

#include<iostream>
#include<string>
#include"Person.h"

using namespace std;
class Visitor : public Person {
private:
    int room_number_ = 0;
public:
    Visitor(string last_name, string first_name, bool sex, bool clothes_poor, string location); //: Person(last_name, first_name, sex, clothes_capacity, location, hotel);
    Visitor();
    Visitor& operator=(Visitor& other);
    int get_room_number();
    bool order_room(int num_room);
    bool move_out();
};

