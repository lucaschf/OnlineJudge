//
// Created by lucas on 01/18/2021.
//

#include <iomanip>
#include "Problem1187.h"

void Problem1187::solve() {
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

    for (int i = 0; i < (size - 1) / 2; i++) {
        for (int j = i + 1; j < size - 1 - i; j++) {
            result += arr[i][j];
            count++;
        }
    }

    if (operation == 'M') {
        result /= count;
    }

    cout << fixed << setprecision(1) << result << endl;
}

string Problem1187::getName() {
    return "Top Area";
}

int Problem1187::getNumber() {
    return 1187;
}
