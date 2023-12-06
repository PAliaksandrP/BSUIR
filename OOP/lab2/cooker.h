#pragma once

#include<iostream>
#include<string> 
#include"administrator.h"
#include"cafe.h"
#include"hotel.h"
#include"hotel_room.h"
#include"maid.h"
#include"person.h"
#include"play_room.h"
#include"room.h"
#include"visitor.h"

using namespace std;

class Cooker :private Person {
    string rang_;
    Cafe work_;
    bool add_menu(string menu);
    bool delete_menu(string menu);
    bool cooking(string dish);
public:
    Cooker(string last_name, string first_name, bool sex, bool clothes_capacity, string location, Hotel hotel, string rang,Cafe work);

};
