//
// Created by lucas on 01/18/2021.
//

#include "Problem1837.h"

void Problem1837::solve() {
    int a;
    int b;

    cin >> a;
    cin >> b;

    auto r = (a % b);
    if (r < 0) {
        r += abs(b);
    }

    auto q = (a - r) / b;

    cout << q << " " << r << endl;
}

string Problem1837::getName() {
    return "Preface";
}

int Problem1837::getNumber() {
    return 1837;
}
