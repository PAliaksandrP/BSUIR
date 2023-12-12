#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"Room.h"

using namespace std;

class Cafe :public Room {
    friend class Cooker;
private:
    int number_tables_;
    //vector<string> menu_;
protected:
    vector<string> menu_;
    void set_menu(string dish);
    void del_menu(int n);
public:
  /*  vector<string> menu_;
    int number_tables_*/;
    Cafe(bool poor, int capacity,vector<string>menu, int number_tables);
    Cafe();
    vector<string> get_menu();
    //void set_menu(string dish);
    //void del_menu(int n);
    void add_tables(int n);
    int get_tables();
    Cafe& operator =(Cafe& other);
};
