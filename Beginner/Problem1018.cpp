//
// Created by lucas on 01/16/2021.
//

#include "Problem1018.h"

void Problem1018::solve() {
    const int banknote_values[] = {100, 50, 20, 10, 5, 2, 1};
    int requested;

    cin >> requested;

    cout << requested << endl;

    for (int banknote_value : banknote_values) {
        int quantity = 0;
        if (requested >= banknote_value) {
            quantity = requested / banknote_value;
            requested = requested % banknote_value;
        }

        cout << quantity << " nota(s) de R$ " << banknote_value << ",00" << endl;
    }
}

string Problem1018::getName() {
    return "Banknotes";
}

int Problem1018::getNumber() {
    return 1018;
}
