//
// Created by lucas on 01/16/2021.
//

#include "Problem1002.h"

string Problem1002::getName() {
    return "Area of a circle";
}

void Problem1002::solve() {
    double n = 3.14159;
    double r;

    cin >> r;

    printf("A=%.4f\n", n * (r * r));
}