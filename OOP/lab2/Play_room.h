#pragma once
#include "Room.h"
#include<vector>
#include<string>
#include<iostream>

using namespace std;
class Play_room :  public Room
{
private:
    vector<string> games_;
public:
    //vector<string> games_;
    bool play_game(string game);
    vector<string> get_games();
    Play_room(bool poor, int capacity, vector<string>games);
    Play_room();
    Play_room& operator=(Play_room& other);
    bool add_game(string game);
    bool delete_game(string game);
};

