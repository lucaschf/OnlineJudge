//
// Created by lucas on 01/16/2021.
//

#include "Problem1006.h"

string Problem1006::getName() {
    return "Average 2";
}

void Problem1006::solve() {
    float a;
    float b;
    float c;

    double weightA = 2;
    double weightB = 3;
    double weightC = 5;

    cin >> a;
    cin >> b;
    cin >> c;

    printf("MEDIA = %.1f\n", (a * weightA + b * weightB + c * weightC) / (weightB + weightA + weightC));
}