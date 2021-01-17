//
// Created by lucas on 01/17/2021.
//

#include "Problem1159.h"

void Problem1159::solve() {
    int x;

    cin >> x;

    while (x != 0) {
        int sum = 0;
        int added = 0;

        while (added < 5) {
            if (x % 2 == 0) {
                added++;
                sum += x;
            }

            x += 1;
        }

        cout << sum << endl;
        cin >> x;
    }
}

string Problem1159::getName() {
    return "Sum of Consecutive Even Numbers";
}

int Problem1159::getNumber() {
    return 1159;
}
