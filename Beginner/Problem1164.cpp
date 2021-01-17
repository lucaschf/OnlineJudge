//
// Created by lucas on 01/17/2021.
//

#include "Problem1164.h"

void Problem1164::solve() {
    int count;
    int n;
    int sum;

    cin >> count;

    for (int i = 0; i < count; i++) {
        cin >> n;

        sum = 0;

        for (int j = 1; j < n; j++) {
            if (n % j == 0)
                sum += j;

            if (sum > n)
                break;
        }

        cout << n << (sum == n ? " eh perfeito" : " nao eh perfeito") << endl;
    }
}

string Problem1164::getName() {
    return "Perfect Number";
}

int Problem1164::getNumber() {
    return 1164;
}
