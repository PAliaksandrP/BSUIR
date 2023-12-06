#pragma once
#include "Person.h"
#include"Cafe.h"
#include<iostream>
#include<string>

using namespace std;
class Cooker :  public Person
{
public:
    Cafe work_;
    bool add_menu(string menu);
    bool delete_menu(string menu);
    bool cooking(string dish);
    Cooker(string last_name, string first_name, bool sex, bool clothes_capacity, string location, string rang, Cafe work);
};

