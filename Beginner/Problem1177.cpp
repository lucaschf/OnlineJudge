//
// Created by lucas on 01/17/2021.
//

#include "Problem1177.h"

void Problem1177::solve() {
    const int size = 1000;
    int arr[size];
    int biggest;
    int count = 0;

    cin >> biggest;

    while (count < size) {
        for (int i = 0; i < biggest && count < size; i++) {
            arr[count++] = i;
        }
    }

    for (int i = 0; i < size; i++) {
        cout << "N[" << i << "] = " << arr[i] << endl;
    }
}

string Problem1177::getName() {
    return "Array Fill II";
}

int Problem1177::getNumber() {
    return 1177;
}
