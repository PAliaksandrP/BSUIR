#pragma once
#include <iostream>
#include <string>
#include"administrator.h"
#include"cafe.h"
#include"cooker.h"
#include"hotel.h"
#include"hotel_room.h"
#include"maid.h"
#include"play_room.h"
#include"room.h"
#include"visitor.h"

using namespace std;

class Person {
public:
    string last_name_;
    string first_name_;
    
    bool sex_;
    bool clothes_capacity_;
    Person(string last_name,string first_name,bool sex,bool clothes_capacity,string location,Hotel hotel);
    Person();
    string say_name();
private:
    string location_;
    Hotel hotel_;
    void reset_place();
};
