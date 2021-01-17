//
// Created by lucas on 01/17/2021.
//

#include "Problem1065.h"

void Problem1065::solve() {
    const int count = 5;
    int even = 0;

    int value;
    for (int i = 1; i <= count; i++) {
        cin >> value;

        if (value % 2 == 0) {
            even++;
        }
    }

    printf("%d valores pares\n", even);
}

string Problem1065::getName() {
    return "Even Between five Numbers";
}

int Problem1065::getNumber() {
    return 1065;
}
