//
// Created by lucas on 01/17/2021.
//

#include "Problem1059.h"

void Problem1059::solve() {
    for (int i = 1; i <= 100; i++)
        if (i % 2 == 0)
            cout << i << endl;
}

string Problem1059::getName() {
    return "Even Numbers";
}

int Problem1059::getNumber() {
    return 1059;
}
