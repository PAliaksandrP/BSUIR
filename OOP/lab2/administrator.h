#pragma once

#include<iostream>
#include<string>
#include<vector>
#include"cafe.h"
#include"cooker.h"
#include"hotel.h"
#include"hotel_room.h"
#include"maid.h"
#include"person.h"
#include"play_room.h"
#include"room.h"
#include"visitor.h"

using namespace std;

class Administrator :private Person {
public:
    string rang_;
    Administrator(string last_name, string first_name, bool sex, bool clothes_capacity, string location, Hotel hotel,string rang);
    bool invite(Hotel_room room, Visitor visitor, int number);
    bool remove(Hotel_room room, Visitor visitor, int number);
};

