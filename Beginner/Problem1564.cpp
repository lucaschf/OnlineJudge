//
// Created by lucas on 01/18/2021.
//

#include "Problem1564.h"

void Problem1564::solve() {
    int complaints;

    while (cin >> complaints && !cin.eof()) {
        cout << (complaints == 0 ? "vai ter copa!" : "vai ter duas!") << endl;
    }
}

string Problem1564::getName() {
    return "Brazil World Cup";
}

int Problem1564::getNumber() {
    return 1564;
}
