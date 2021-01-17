//
// Created by lucas on 01/17/2021.
//

#include "Problem1080.h"

void Problem1080::solve() {
    const int quantity = 100;
    int position = 0;
    int highest = 0;
    int value;

    for (int i = 1; i <= quantity; i++) {
        cin >> value;

        if (value > highest) {
            highest = value;
            position = i;
        }
    }

    cout << highest << endl << position << endl;
}

string Problem1080::getName() {
    return "Highest and Position";
}

int Problem1080::getNumber() {
    return 1080;
}
