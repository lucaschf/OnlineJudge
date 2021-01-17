//
// Created by lucas on 01/17/2021.
//

#include <iomanip>
#include "Problem1181.h"

void Problem1181::solve() {
    const int size = 12;
    double arr[size][size];
    int line;
    char operation;
    double result = 0;

    cin >> line;
    cin >> operation;

    for (auto &i : arr) {
        for (auto &j : i) {
            cin >> j;
        }
    }

    for (int i = 0; i < size; i++)
        result += arr[line][i];

    if (operation == 'M') {
        result /= size;
    }

    cout << fixed << setprecision(1) << result << endl;
}

string Problem1181::getName() {
    return "Line in Array";
}

int Problem1181::getNumber() {
    return 1181;
}
