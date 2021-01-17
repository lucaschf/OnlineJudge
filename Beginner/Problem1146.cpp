//
// Created by lucas on 01/17/2021.
//

#include "Problem1146.h"

void Problem1146::solve() {
    int sequence_size;

    while ((cin >> sequence_size) && sequence_size != 0) {
        for (int i = 1; i <= sequence_size; i++) {
            cout << i;
            cout << (i == sequence_size ? "\n" : " ");
        }
    }
}

string Problem1146::getName() {
    return "Growing Sequences";
}
