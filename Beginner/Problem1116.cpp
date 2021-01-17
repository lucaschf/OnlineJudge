//
// Created by lucas on 01/17/2021.
//

#include "Problem1116.h"

void Problem1116::solve() {
    int x;
    int y;
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        cin >> y;

        if (y != 0) {
            printf("%1.1f\n", (double) ((double) x / y));
        } else {
            cout << "divisao impossivel" << endl;
        }
    }
}

string Problem1116::getName() {
    return "Dividing X by Y";
}
