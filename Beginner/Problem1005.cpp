//
// Created by lucas on 01/16/2021.
//

#include "Problem1005.h"

string Problem1005::getName() {
    return "Average 1";
}

void Problem1005::solve() {
    float a;
    float b;

    double weightA = 3.5;
    double weightB = 7.5;

    cin >> a;
    cin >> b;

    printf("MEDIA = %.5f\n", (a * weightA + b * weightB) / (weightB + weightA));
}