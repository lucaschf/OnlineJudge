//
// Created by lucas on 01/17/2021.
//

#include "Problem1132.h"

void Problem1132::solve() {
    int x;
    int y;

    cin >> x;
    cin >> y;

    if (x > y) {
        int aux = x;

        x = y;
        y = aux;
    }

    int sum = 0;
    for (; x <= y; x++) {
        if (x % 13 != 0)
            sum += x;
    }

    cout << sum << endl;
}

string Problem1132::getName() {
    return "Multiples of 13";
}

int Problem1132::getNumber() {
    return 1132;
}
