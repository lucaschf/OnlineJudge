//
// Created by lucas on 01/18/2021.
//

#include <iomanip>
#include "Problem1184.h"

void Problem1184::solve() {
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
        for (int j = 0; j <= i - 1; j++) {
            result += arr[i][j];
            count++;
        }
    }

    if (operation == 'M') {
        result /= count;
    }

    cout << fixed << setprecision(1) << result << endl;
}

string Problem1184::getName() {
    return "Below the Main Diagonal";
}

int Problem1184::getNumber() {
    return 1184;
}
