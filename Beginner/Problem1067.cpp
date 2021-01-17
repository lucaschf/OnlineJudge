//
// Created by lucas on 01/17/2021.
//

#include "Problem1067.h"

void Problem1067::solve() {
    int n;

    cin >> n;

    for (int i = 1; i <= n; i++)
        if (i % 2 != 0)
            cout << i << endl;
}

string Problem1067::getName() {
    return "Odd Numbers";
}
