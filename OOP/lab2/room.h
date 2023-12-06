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
#include"visitor.h"

using namespace std;

class Room {
public:
    bool poor_;
    int capacity_;
    Hotel hotel_;
    Room(bool poor, int capacity, Hotel hotel);
    Room();
};

