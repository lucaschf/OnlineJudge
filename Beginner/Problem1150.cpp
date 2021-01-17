//
// Created by lucas on 01/17/2021.
//

#include "Problem1150.h"

void Problem1150::solve() {
    int x;
    int z;

    cin >> x;
    cin >> z;

    while (z <= x)
        cin >> z;

    int sum = x;
    int count = 1;

    while (sum < z) {
        x += 1;
        sum += x;
        count++;
    }

    cout << count << endl;
}

string Problem1150::getName() {
    return "Exceeding Z";
}
