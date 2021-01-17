//
// Created by lucas on 01/16/2021.
//

#include "Problem1013.h"

void Problem1013::solve() {
    int a;
    int b;
    int c;

    cin >> a;
    cin >> b;
    cin >> c;

    int greatest = (a + b + abs(a - b)) / 2;
    greatest = (greatest + c + abs(greatest - c)) / 2;

    printf("%d eh o maior\n", greatest);
}

string Problem1013::getName() {
    return "The Greatest";
}
