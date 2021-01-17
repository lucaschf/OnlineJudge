//
// Created by lucas on 01/17/2021.
//

#include <iomanip>
#include "Problem1156.h"

void Problem1156::solve() {
    double sum = 0;
    double denominator = 1;

    for (int i = 1; i <= 39; i += 2) {
        sum += i / denominator;
        denominator *= 2;
    }

    cout << fixed << setprecision(2) << sum << endl;
}

string Problem1156::getName() {
    return "S Sequence II";
}

int Problem1156::getNumber() {
    return 1156;
}
