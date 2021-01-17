//
// Created by lucas on 01/17/2021.
//

#include "Problem1133.h"

void Problem1133::solve() {
    int x;
    int y;

    cin >> x;
    cin >> y;

    if (x > y) {
        int aux = x;

        x = y;
        y = aux;
    }

    for (x += 1; x < y; x++) {
        auto rest = x % 5;
        if (rest == 2 || rest == 3)
            cout << x << endl;
    }
}

string Problem1133::getName() {
    return "Rest of a Division";
}
