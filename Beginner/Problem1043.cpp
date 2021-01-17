//
// Created by lucas on 01/17/2021.
//

#include "Problem1043.h"

void Problem1043::solve() {
    double a;
    double b;
    double c;

    cin >> a;
    cin >> b;
    cin >> c;

    if (a + b <= c || a + c <= b || b + c <= a)
        printf("Area = %1.1f\n", c * ((a + b) / 2));
    else
        printf("Perimetro = %1.1f\n", a + b + c);
}

string Problem1043::getName() {
    return "Triangle";
}

int Problem1043::getNumber() {
    return 1043;
}
