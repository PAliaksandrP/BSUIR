#pragma once

#include<iostream>
#include<string> 
#include"administrator.h"
#include"cafe.h"
#include"cooker.h"
#include"hotel.h"
#include"maid.h"
#include"person.h"
#include"play_room.h"
#include"room.h"
#include"visitor.h"

using namespace std;

class Hotel_room :public Room {
    int number_;
    string type_;
    Visitor visitor_;
    string choose_type(int n);
    string get_visitor();
public:
    Hotel_room(bool poor, int capacity, Hotel hotel, int number, string type, Visitor visitor);
    Hotel_room();
};
