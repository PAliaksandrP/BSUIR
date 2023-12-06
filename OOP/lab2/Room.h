#pragma once
#include<iostream>
#include<string>

using namespace std;

class Room {
public:
    bool poor_;
    int capacity_;
    Room(bool poor, int capacity);
    Room();
    Room& operator=(Room& other);
};


