//
// Created by lucas on 01/16/2021.
//

#include "Problem1004.h"

string Problem1004::getName() {
    return "Simple Product";
}

void Problem1004::solve() {
    int a;
    int b;

    cin >> a;
    cin >> b;

    printf("PROD = %d\n", a * b);
}

int Problem1004::getNumber() {
    return 1004;
}
