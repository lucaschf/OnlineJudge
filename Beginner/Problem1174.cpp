//
// Created by lucas on 01/17/2021.
//

#include <iomanip>
#include "Problem1174.h"

void Problem1174::solve() {
    const int size = 100;
    double arr[size];

    for (double &i : arr) {
        cin >> i;
    }

    for (int i = 0; i < size; i++) {
        if (arr[i] <= 10)
            cout << fixed << setprecision(1) << "A[" << i << "] = " << arr[i] << endl;
    }
}

string Problem1174::getName() {
    return "Array Selection I";
}

int Problem1174::getNumber() {
    return 1174;
}
