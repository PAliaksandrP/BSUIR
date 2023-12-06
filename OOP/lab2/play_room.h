#pragma once

#include<iostream>
#include<string> 
#include<vector>
#include"administrator.h"
#include"cafe.h"
#include"cooker.h"
#include"hotel.h"
#include"hotel_room.h"
#include"maid.h"
#include"person.h"
#include"room.h"
#include"visitor.h"

using namespace std;

class Play_room :public Room {
public:
    vector<string> games_;
    string play_game();
    Play_room(bool poor, int capacity, Hotel hotel, vector<string>games);
private:
    bool add_game(string game);
    bool delete_game(string game);
};
