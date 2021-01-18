//
// Created by lucas on 01/18/2021.
//

#include <iomanip>
#include "Problem1183.h"

void Problem1183::solve() {
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

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            result += arr[i][j];
            count++;
        }
    }

    if (operation == 'M') {
        result /= count;
    }

    cout << fixed << setprecision(1) << result << endl;
}

string Problem1183::getName() {
    return "Above the Main Diagonal";
}

int Problem1183::getNumber() {
    return 1183;
}
