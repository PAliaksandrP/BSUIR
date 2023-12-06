#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"Room.h"
using namespace std;

class Cafe :public Room {
public:
    vector<string> menu_;
    int number_tables_;
    Cafe(bool poor, int capacity,vector<string>menu, int number_tables);
    Cafe();
    vector<string> get_menu();
    int add_tables(int n);
    Cafe& operator =(Cafe& other);
};
