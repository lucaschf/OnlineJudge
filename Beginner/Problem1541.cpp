//
// Created by lucas on 01/18/2021.
//

#include <cmath>
#include "Problem1541.h"

void Problem1541::solve() {
    int a;
    int b;
    int c;

    while ((cin >> a) && a != 0) {
        cin >> b;
        cin >> c;

        auto area = a * b * 100 / c;

        cout << (int) sqrt(area) << endl;
    }
}

string Problem1541::getName() {
    return "Building Houses";
}

int Problem1541::getNumber() {
    return 1541;
}
