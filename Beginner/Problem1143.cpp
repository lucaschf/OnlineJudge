//
// Created by lucas on 01/17/2021.
//

#include "Problem1143.h"

void Problem1143::solve() {
    int n;

    cin >> n;

    int columns = 3;

    for (int i = 1; i <= n; i++) {
        int val = i;

        for (int j = 0; j < columns; j++) {
            cout << val;

            if (j < columns - 1)
                cout << " ";

            val *= i;
        }

        cout << endl;
    }
}

string Problem1143::getName() {
    return "Squared and Cubic";
}

int Problem1143::getNumber() {
    return 1143;
}
