#pragma once
#include "Person.h"
#include"Room.h"
#include"Rangable.h"
#include<iostream>
#include<string>
using namespace std;
class Maid : public Person, public Rangable
{
public:
    Maid(string last_name, string first_name, bool sex, bool clothes_capacity, string location,  string rang);
    bool clean_room(Room& room);
    bool clean_clothes(Person& person);
};

