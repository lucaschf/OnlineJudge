//
// Created by lucas on 01/18/2021.
//

#include <iomanip>
#include "Problem1189.h"

void Problem1189::solve() {
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

    for (int i = 0; i < size / 2; i++) {
        for (int j = 0; j < i; j++) {
            result += arr[i][j];
            count++;
        }
    }

    for (int i = size / 2; i < size; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            result += arr[i][j];
            count++;
        }
    }

    if (operation == 'M') {
        result /= count;
    }

    cout << fixed << setprecision(1) << result << endl;
}

string Problem1189::getName() {
    return "Left Area";
}

int Problem1189::getNumber() {
    return 1189;
}
