//
// Created by lucas on 01/16/2021.
//

#include "Problem1003.h"

string Problem1003::getName() {
    return "Simple Sum";
}

void Problem1003::solve() {
    int a;
    int b;

    cin >> a;
    cin >> b;

    printf("SOMA = %d\n", a + b);
}