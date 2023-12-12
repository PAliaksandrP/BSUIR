#include "Cooker.h"

Cooker::Cooker(string last_name, string first_name, bool sex, bool clothes_capacity, string location, string rang, Cafe work) :Person(last_name, first_name, sex, clothes_capacity, location) {
    rang_ = rang;
    work_ = work;
}
Cafe Cooker::get_cafe()
{
    return work_;
}
bool Cooker::add_menu(string menu) {
    work_.set_menu(menu);
    return true;
    //return false;
}

bool Cooker::delete_menu(string menu) {
    for (int i = 0; i < work_.get_menu().size(); i++) {
        if (menu == work_.get_menu()[i]) {
            work_.del_menu(i);
            return true;
        }
    }
    return false;
}
bool Cooker::cooking(string dish) {
    for (int i = 0; i < work_.get_menu().size(); i++) {
        if (dish == work_.get_menu()[i]) {
            return true;
        }
    }
    return false;
}