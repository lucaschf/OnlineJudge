//
// Created by lucas on 01/17/2021.
//

#include "Problem1099.h"

void Problem1099::solve() {
    int n;
    int x;
    int y;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        cin >> y;

        int aux;

        if (x > y) {
            aux = y;
            y = x;
            x = aux;
        }

        int sum = 0;
        for (x += 1; x < y; x++) {
            if (x % 2 != 0)
                sum += x;
        }

        cout << sum << endl;
    }
}

string Problem1099::getName() {
    return "Sum of Consecutive Odd Numbers II";
}
