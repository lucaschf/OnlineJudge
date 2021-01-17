//
// Created by lucas on 01/17/2021.
//

#include "Problem1060.h"

void Problem1060::solve() {
    double number;
    int positives = 0;

    for (int i = 0; i < 6; i++) {
        cin >> number;
        if (number > 0)
            positives++;
    }

    cout << positives << " valores positivos" << endl;
}

string Problem1060::getName() {
    return "Positive Numbers";
}

int Problem1060::getNumber() {
    return 1060;
}
