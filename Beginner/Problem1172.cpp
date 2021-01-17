//
// Created by lucas on 01/17/2021.
//

#include "Problem1172.h"

void Problem1172::solve() {
    const int size = 10;
    int x[size];

    for (int &i : x) {
        cin >> i;

        if (i <= 0)
            i = 1;
    }

    for (int i = 0; i < size; i++) {
        cout << "X[" << i << "] = " << x[i] << endl;
    }
}

string Problem1172::getName() {
    return "Array Replacement I";
}

int Problem1172::getNumber() {
    return 1172;
}
