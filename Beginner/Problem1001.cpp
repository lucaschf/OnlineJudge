//
// Created by lucas on 01/16/2021.
//

#include "Problem1001.h"

string Problem1001::getName() {
    return "Extremely Basic";
}

void Problem1001::solve() {
    int a;
    int b;

    cin >> a;
    cin >> b;

    cout << "X = " << a + b << endl;
}

int Problem1001::getNumber() {
    return 1001;
}
