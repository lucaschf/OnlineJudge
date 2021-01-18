//
// Created by lucas on 01/18/2021.
//

#include "Problem1759.h"

void Problem1759::solve() {
    int count;

    cin >> count;

    for (int i = 1; i <= count; i++) {
        cout << "Ho";
        cout << (i < count ? " " : "!");
    }

    cout << endl;
}

string Problem1759::getName() {
    return "Ho Ho Ho";
}

int Problem1759::getNumber() {
    return 1759;
}
