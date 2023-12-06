#include <iostream>
#include <math.h>
#include "rentangle.h"


using namespace std;

int main() {
    rentangle reac(0, 0, 5, 5);
    reac.get();
    cin >> reac;
    cout << reac;
    return 0;
}