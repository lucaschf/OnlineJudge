//
// Created by lucas on 01/18/2021.
//

#include <iomanip>
#include "Problem1182.h"

void Problem1182::solve() {
    const int size = 12;
    double arr[size][size];
    int column;
    char operation;
    double result = 0;

    cin >> column;
    cin >> operation;

    for (auto &i : arr) {
        for (auto &j : i) {
            cin >> j;
        }
    }

    for (auto &i : arr)
        result += i[column];

    if (operation == 'M') {
        result /= size;
    }

    cout << fixed << setprecision(1) << result << endl;
}

string Problem1182::getName() {
    return "Column in Array";
}

int Problem1182::getNumber() {
    return 1182;
}
