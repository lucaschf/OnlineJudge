//
// Created by lucas on 01/17/2021.
//

#include "Problem1098.h"

void Problem1098::solve() {
    double i = 0;

    while (i <= 2) {
        for (int j = 1; j <= 3; j++)
            cout << "I=" << i << " J=" << j + i << endl;
        i += .2;
    }
}

string Problem1098::getName() {
    return "Sequence IJ 4";
}
