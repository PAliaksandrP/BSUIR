#pragma once

#include<iostream>
#include<string>
#include"administrator.h"
#include"cafe.h"
#include"cooker.h"
#include"hotel.h"
#include"hotel_room.h"
#include"maid.h"
#include"person.h"
#include"play_room.h"
#include"room.h"



using namespace std;

class Visitor :public Person {
public:
    Hotel_room room_;
    int room_number_;
    Visitor(string last_name, string first_name, bool sex, bool clothes_capacity, string location, Hotel hotel, Hotel_room room, int room_number); //: Person(last_name, first_name, sex, clothes_capacity, location, hotel);
    Visitor();
    bool order_room(int num_room);
    bool go_out();
};
