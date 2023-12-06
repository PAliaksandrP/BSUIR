#pragma once

#include <iostream>
#include <math.h>

using namespace std;
/**
* @brief класс прямоугольник
*/
class rentangle
{
public:
    //point diagonal of rentangle
    int x1_, y1_, x2_, y2_;
    rentangle(int x1, int y1, int x2, int y2);
    void increase(int x, int y);

    void move(int x, int y);
    void get();
    bool operator ==(const rentangle& other);
    bool operator !=(const rentangle& other);
    rentangle& operator +=(const rentangle& other);
    rentangle operator+(const rentangle& other);
    rentangle& operator++(int);
    rentangle& operator--(int);
    rentangle& operator -=(const rentangle& other);
    rentangle& operator -(const rentangle& other);
    rentangle& operator=(const rentangle& other);

};
ostream& operator <<(ostream& os, const rentangle rentangle);
istream& operator >>(istream& in, rentangle& input);
