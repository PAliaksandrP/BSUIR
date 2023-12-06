#include "Cooker.h"

Cooker::Cooker(string last_name, string first_name, bool sex, bool clothes_capacity, string location, string rang, Cafe work) :Person(last_name, first_name, sex, clothes_capacity, location) {
    rang_ = rang;
    work_ = work;
}
bool Cooker::add_menu(string menu) {
    work_.menu_.push_back(menu);
    return true;
    //return false;
}

bool Cooker::delete_menu(string menu) {
    for (int i = 0; i < work_.menu_.size(); i++) {
        if (menu == work_.menu_[i]) {
            work_.menu_.erase(work_.menu_.begin() + i);
            return true;
        }
    }
    return false;
}
bool Cooker::cooking(string dish) {
    for (int i = 0; i < work_.menu_.size(); i++) {
        if (dish == work_.menu_[i]) {
            return true;
        }
    }
    return false;
}