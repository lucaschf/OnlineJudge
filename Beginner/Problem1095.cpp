//
// Created by lucas on 01/17/2021.
//

#include "Problem1095.h"

void Problem1095::solve() {
    int i = 1;
    int j = 60;

    for (; j >= 0; j -= 5, i += 3) {
        cout << "I=" << i << " J=" << j << endl;
    }
}

string Problem1095::getName() {
    return "Sequence IJ 1";
}

int Problem1095::getNumber() {
    return 1095;
}
