#pragma once
#include "Person.h"
#include"Hotel_room.h"
#include"Visitor.h"
#include"Hotel.h"
#include"Rangable.h"
#include<string>
#include<iostream>

using namespace std;
class Administrator :  public Person,public Rangable
{
private:
    Hotel hotel_;
public:
    Administrator(string last_name, string first_name, bool sex, bool clothes_capacity, string location,  string rang ,Hotel hotel);
    bool invite( Visitor& visitor, int number);
    bool remove( Visitor& visitor, int number);
    Hotel get_hotel();
};

