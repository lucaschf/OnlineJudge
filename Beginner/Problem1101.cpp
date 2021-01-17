//
// Created by lucas on 01/17/2021.
//

#include "Problem1101.h"

void Problem1101::solve() {
    int x;
    int y;

    while (true) {
        cin >> x;
        cin >> y;

        if (x <= 0 || y <= 0)
            break;

        if (x > y) {
            int aux = x;
            x = y;
            y = aux;
        }

        int sum = 0;
        for (; x <= y; x++) {
            cout << x << " ";
            sum += x;
        }

        cout << "Sum=" << sum << endl;
    }
}

string Problem1101::getName() {
    return "Sequence of Numbers and Sum";
}
