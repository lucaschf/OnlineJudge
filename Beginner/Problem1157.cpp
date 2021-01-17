//
// Created by lucas on 01/17/2021.
//

#include "Problem1157.h"

void Problem1157::solve() {
    int n;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            cout << i << endl;
    }
}

string Problem1157::getName() {
    return "Divisors I";
}

int Problem1157::getNumber() {
    return 1157;
}
