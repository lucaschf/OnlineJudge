//
// Created by lucas on 01/17/2021.
//

#include "Problem1165.h"

void Problem1165::solve() {
    int count;
    int n;

    bool is_prime;

    cin >> count;

    for (int i = 0; i < count; i++) {
        cin >> n;

        is_prime = true;

        for (int j = n / 2; j > 1 && is_prime; j--) {
            is_prime = n % j != 0;
        }

        cout << n << (is_prime ? " eh primo" : " nao eh primo") << endl;
    }
}

string Problem1165::getName() {
    return "Prime Number";
}

int Problem1165::getNumber() {
    return 1165;
}
