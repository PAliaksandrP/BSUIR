#include "cooker.h"
#include<vector>
#include<string>
using namespace std;



Cooker::Cooker(string last_name, string first_name, bool sex, bool clothes_capacity, string location, Hotel hotel, string rang, Cafe work) :Person(last_name, first_name, sex, clothes_capacity, location, hotel){
    this->rang_ = rang;
    this->work_ = work;
}
bool Cooker::add_menu(string menu) {
    work_.menu.push_back(menu);
    return true;
    //return false;
}

bool Cooker::delete_menu(string menu) {
    for (int i = 0; i < work_.menu.size(); i++) {
        if (menu == work_.menu[i]) {
            work_.menu.erase(work_.menu.begin()+i);
            return true;
        }
    }
    return false;
}
bool Cooker::cooking(string dish) {
    for (int i = 0; i < work_.menu.size(); i++) {
        if (dish == work_.menu[i]) {
            return true;
        }
    }
    return false;
}