//
// Created by lucas on 01/17/2021.
//

#include "Problem1073.h"

#include <cmath>
#include <iomanip>

void Problem1073::solve() {
    int n;

    cin >> n;

    for (int i = 2; i <= n; i += 2) {
        cout << std::fixed << setprecision(0) << i << "^" << 2 << " = " << pow(i, 2) << endl;
    }
}

string Problem1073::getName() {
    return "Even Square";
}

int Problem1073::getNumber() {
    return 1073;
}
