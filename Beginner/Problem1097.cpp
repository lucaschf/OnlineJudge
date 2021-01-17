//
// Created by lucas on 01/17/2021.
//

#include "Problem1097.h"

void Problem1097::solve() {
    for (int i = 1; i < 10; i += 2) {
        for (int j = 6 + i; j > 6 + i - 3; j--)
            cout << "I=" << i << " J=" << j << endl;
    }
}

string Problem1097::getName() {
    return "Sequence IJ 3";
}
