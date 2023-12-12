#pragma once
#include<iostream>
#include<string>

using namespace std;

class Room {
protected:
    int capacity_;
public:
    bool poor_;
    //int capacity_;
    Room(bool poor, int capacity);
    Room();
    int get_capacity();
    Room& operator=(Room& other);
};


