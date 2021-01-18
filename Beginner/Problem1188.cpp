//
// Created by lucas on 01/18/2021.
//

#include <iomanip>
#include "Problem1188.h"

void Problem1188::solve() {
    const int size = 12;
    double arr[size][size];
    char operation;
    double result = 0;
    int count = 0;

    cin >> operation;

    for (auto &i : arr) {
        for (auto &j : i) {
            cin >> j;
        }
    }

    for (int i = size / 2; i < size; i++) {
        for (int j = size - i; j < i; j++) {
            result += arr[i][j];
            count++;
        }
    }

    if (operation == 'M') {
        result /= count;
    }

    cout << fixed << setprecision(1) << result << endl;
}

string Problem1188::getName() {
    return "Inferior Area";
}

int Problem1188::getNumber() {
    return 1188;
}
