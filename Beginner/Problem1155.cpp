//
// Created by lucas on 01/17/2021.
//

#include <iomanip>
#include "Problem1155.h"

void Problem1155::solve() {
    double sum = 1;

    for (int i = 2; i <= 100; i++) {
        sum += 1.0 / i;
    }

    cout << fixed << setprecision(2) << sum << endl;
}

string Problem1155::getName() {
    return "S Sequence";
}

int Problem1155::getNumber() {
    return 1155;
}
