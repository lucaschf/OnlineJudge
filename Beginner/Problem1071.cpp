//
// Created by lucas on 01/17/2021.
//

#include "Problem1071.h"

void Problem1071::solve() {
    int x;
    int y;

    cin >> x;
    cin >> y;

    int aux;
    int sum = 0;

    if (x < y) {
        aux = x;
        x = y;
        y = aux;
    }

    for (x = x - 1; x > y; x--) {
        if (x % 2 != 0) {
            sum += x;
        }
    }

    cout << sum << endl;
}

string Problem1071::getName() {
    return "Sum of Consecutive Odd Numbers I";
}

int Problem1071::getNumber() {
    return 1071;
}
