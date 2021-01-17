//
// Created by lucas on 01/17/2021.
//

#include "Problem1175.h"

void Problem1175::solve() {
    const int size = 20;
    int x[size];

    for (int &i : x) {
        cin >> i;
    }

    for (int i = 0; i < size / 2; i++) {
        auto aux = x[i];
        auto pos = (size - 1) - i;

        x[i] = x[pos];
        x[pos] = aux;
    }

    for (int i = 0; i < size; i++) {
        cout << "N[" << i << "] = " << x[i] << endl;
    }
}

string Problem1175::getName() {
    return "Array change I";
}

int Problem1175::getNumber() {
    return 1175;
}
