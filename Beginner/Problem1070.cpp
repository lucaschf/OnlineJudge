//
// Created by lucas on 01/17/2021.
//

#include "Problem1070.h"

void Problem1070::solve() {
    const int quantity = 6;
    int n;
    int count = 0;

    cin >> n;

    while (count < quantity) {
        if (n % 2 != 0) {
            cout << n << endl;
            count++;
        }

        n++;
    }
}

string Problem1070::getName() {
    return "Six Odd Numbers";
}
