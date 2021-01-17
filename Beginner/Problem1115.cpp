//
// Created by lucas on 01/17/2021.
//

#include "Problem1115.h"

string quadrant(int x, int y);

void Problem1115::solve() {
    int x;
    int y;

    while (true) {
        cin >> x;
        cin >> y;

        if (x == 0 || y == 0)
            break;

        cout << quadrant(x, y) << endl;
    }
}

string quadrant(int x, int y) {
    if (x > 0) {
        return (y > 0 ? "primeiro" : "quarto");
    }

    return (y > 0 ? "segundo" : "terceiro");
}

string Problem1115::getName() {
    return "Quadrant";
}

int Problem1115::getNumber() {
    return 1115;
}
