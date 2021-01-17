//
// Created by lucas on 01/17/2021.
//

#include "Problem1145.h"

void Problem1145::solve() {
    int values;
    int columns;

    cin >> columns;
    cin >> values;

    int current_column = 0;

    for (int i = 1; i <= values; i++) {
        current_column++;

        if (current_column == columns) {
            cout << i << endl;
            current_column = 0;
            continue;
        }

        cout << i << " ";
    }
}

string Problem1145::getName() {
    return "Logical Sequence 2";
}

int Problem1145::getNumber() {
    return 1145;
}
