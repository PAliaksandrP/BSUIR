#pragma once

#include<iostream>
#include<string>
#include"administrator.h"
#include"cafe.h"
#include"cooker.h"
#include"hotel_room.h"
#include"maid.h"
#include"person.h"
#include"play_room.h"
#include"room.h"
#include"visitor.h""


using namespace std;

class Hotel {
    int number_rooms_;
    string name_;
    vector<Hotel_room> hotel_rooms_;
    vector<Room>rooms_;
    vector<Visitor> visitors_;
    vector<Person> personals_;
    bool add_personal(Person personal);
    bool generate_hotel();
public:
    Hotel(int number_rooms, string name, vector<Hotel_room> hotel_rooms, vector<Room>rooms, vector<Visitor> visitors, vector<Person> personals);
    Hotel();
    vector<Person> get_list_of_personal();
};