//
// Created by lucas on 01/16/2021.
//

#include <cmath>
#include "Problem1011.h"

void Problem1011::solve() {
    const double pi = 3.14159;
    double radius;

    cin >> radius;

    auto volume = (4.0 / 3.0) * pi * pow(radius, 3);
    printf("VOLUME = %1.3f\n", volume);
}

string Problem1011::getName() {
    return "Sphere";
}

int Problem1011::getNumber() {
    return 1011;
}
