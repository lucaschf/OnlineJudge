//
// Created by lucas on 01/22/2021.
//

#include "Problem1958.h"

void Problem1958::solve() {
    long double number;

    cin >> number;

    printf("%+.4LE\n", number);
}

string Problem1958::getName() {
    return "Scientific Notation";
}

int Problem1958::getNumber() {
    return 1958;
}
