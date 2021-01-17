//
// Created by lucas on 01/17/2021.
//

#include "Problem1096.h"

void Problem1096::solve() {
    for (int i = 1; i < 10; i += 2) {
        for (int j = 7; j > 4; j--)
            cout << "I=" << i << " J=" << j << endl;
    }
}

string Problem1096::getName() {
    return "Sequence IJ 2";
}
