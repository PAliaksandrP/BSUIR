#pragma once

#include<vector>
#include<string>
#include<iostream>
#include"Room.h"
#include"Hotel_room.h"


using namespace std;

class Hotel
{
    friend class Administrator;
private:
    int number_rooms_;
    string name_;
    //vector<Hotel_room> hotel_rooms_;
    vector<Room*>rooms_;
    vector<Person*> personals_;
protected:
    vector<Hotel_room> hotel_rooms_;
public:
   /* int number_rooms_;*/
    //string name_;
    //vector<Hotel_room> hotel_rooms_;
    //vector<Room*>rooms_;
    Hotel(int number_rooms, string name, vector<Hotel_room> hotel_rooms, vector<Room*>rooms, vector<Person*> personals);
    Hotel();
    Hotel& operator=(Hotel& other);
    bool add_personal(Person& personal);
    vector<Person*> get_list_of_personal();
    string get_name();
    int get_number_rooms();
    vector<Hotel_room> get_hotel_rooms();
    vector<Room*> get_room();
};

