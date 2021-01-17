//
// Created by lucas on 01/17/2021.
//

#include "Problem1153.h"

void Problem1153::solve() {
    int number;
    int fat = 1;

    cin >> number;

    for (int i = 1; i <= number; i++) {
        fat *= i;
    }

    cout << fat << endl;
}

string Problem1153::getName() {
    return "Simple Factorial";
}

int Problem1153::getNumber() {
    return 1153;
}
