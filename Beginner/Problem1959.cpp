//
// Created by lucas on 01/22/2021.
//

#include <cmath>
#include "Problem1959.h"

void Problem1959::solve() {
    long long int number;
    long long int length;

    cin >> number >> length;
    cout << (number * length) << endl;
}

string Problem1959::getName() {
    return "Regular Simple Polygons";
}

int Problem1959::getNumber() {
    return 1959;
}
