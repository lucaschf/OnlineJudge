//
// Created by lucas on 01/17/2021.
//

#include "Problem1158.h"

void Problem1158::solve() {
    int n;
    int x;
    int y;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        cin >> y;

        auto sum = 0;
        auto added = 0;

        while (added < y) {
            if (x % 2 != 0) {
                sum += x;
                added++;
            }

            x += 1;
        }

        cout << sum << endl;
    }
}

string Problem1158::getName() {
    return "Sum of Consecutive Odd Numbers III";
}

int Problem1158::getNumber() {
    return 1158;
}
