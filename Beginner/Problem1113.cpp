//
// Created by lucas on 01/17/2021.
//

#include "Problem1113.h"

void Problem1113::solve() {
    int x;
    int y;

    while (true) {
        cin >> x;
        cin >> y;

        if (x == y)
            break;

        cout << (x > y ? "Decrescente" : "Crescente") << endl;
    }
}

string Problem1113::getName() {
    return "Ascending and Descending";
}

int Problem1113::getNumber() {
    return 1113;
}
