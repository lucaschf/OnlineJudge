//
// Created by lucas on 01/17/2021.
//

#include "Problem1151.h"

void Problem1151::solve() {
    int sequence_size;

    cin >> sequence_size;

    int prev = 0;
    int current = 1;
    int next;

    cout << prev << " " << current << " ";
    for (int i = 2; i < sequence_size; i++) {
        next = current + prev;
        prev = current;
        current = next;
        cout << next;

        cout << (i != sequence_size - 1 ? " " : "\n");
    }
}

string Problem1151::getName() {
    return "Easy Fibonacci";
}

int Problem1151::getNumber() {
    return 1151;
}
