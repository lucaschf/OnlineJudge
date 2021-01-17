//
// Created by lucas on 01/17/2021.
//

#include "Problem1078.h"

void Problem1078::solve() {
    int n;
    const int table_size = 10;

    cin >> n;

    for (int i = 1; i <= table_size; i++) {
        cout << i << " x " << n << " = " << i * n << endl;
    }
}

string Problem1078::getName() {
    return "Multiplication Table";
}
