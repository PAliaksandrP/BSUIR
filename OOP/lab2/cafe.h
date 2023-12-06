#include<iostream>
#include<string> 
#include<vector>
#include"administrator.h"
#include"cooker.h"
#include"hotel.h"
#include"hotel_room.h"
#include"maid.h"
#include"person.h"
#include"play_room.h"
#include"room.h"
#include"visitor.h"

using namespace std;

class Cafe : public Room {
public:
    vector<string> menu_;
    int number_tables_;
public:
    Cafe(bool poor, int capacity, Hotel hotel, vector<string>menu,int number_tables);
    vector<string> get_menu();
    bool add_tables(int n);
};

