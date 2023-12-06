#pragma once
#include "Room.h"
#include"Visitor.h"
#include<iostream>
#include<string>

using namespace std;

class Hotel_room :public Room
{
private:
    Visitor visitor_;
public:
    int number_;
    string type_;
    Hotel_room(bool poor, int capacity, int number, int type);
    Hotel_room();
    string choose_type(int n);
    string get_visitor();
    bool add_visitor(Visitor visitor);
    bool remove_visitor();

    Hotel_room& operator=(Hotel_room& other);
};

