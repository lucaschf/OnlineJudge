//
// Created by lucas on 01/17/2021.
//

#include "Problem1866.h"

void Problem1866::solve() {
    int n;
    int elements;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> elements;
        cout << (elements % 2 != 0 ? 1 : 0) << endl;
    }
}

string Problem1866::getName() {
    return "Bill";
}

int Problem1866::getNumber() {
    return 1866;
}
