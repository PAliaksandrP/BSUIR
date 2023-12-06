#pragma once

#include<iostream>
#include<string>
#include"administrator.h"
#include"cafe.h"
#include"cooker.h"
#include"hotel.h"
#include"hotel_room.h"
#include"person.h"
#include"play_room.h"
#include"room.h"
#include"visitor.h"

using namespace std;

class Maid :private Person {
    string rang_;
public:
    Maid(string last_name, string first_name, bool sex, bool clothes_capacity, string location, Hotel hotel,string rang);
    bool clean_room(Room room);
    bool clean_clothes(Person person);
};

