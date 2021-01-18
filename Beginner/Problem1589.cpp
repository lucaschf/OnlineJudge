//
// Created by lucas on 01/18/2021.
//

#include "Problem1589.h"

void Problem1589::solve() {
    int count;
    int radius1;
    int radius2;

    cin >> count;

    for (int i = 0; i < count; i++) {
        cin >> radius1;
        cin >> radius2;

        cout << radius2 + radius1 << endl;
    }
}

string Problem1589::getName() {
    return "Bob Conduit";
}

int Problem1589::getNumber() {
    return 1589;
}
