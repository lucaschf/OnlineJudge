//
// Created by lucas on 01/17/2021.
//

#include "Problem1075.h"

void Problem1075::solve() {
    int n;
    const int last = 10000;

    cin >> n;

    for (int i = 1; i <= last; i++) {
        if (i % n == 2)
            cout << i << endl;
    }
}

string Problem1075::getName() {
    return "Remaining 2";
}
