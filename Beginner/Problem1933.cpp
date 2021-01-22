//
// Created by lucas on 01/18/2021.
//

#include "Problem1933.h"

void Problem1933::solve() {
    int card1;
    int card2;

    cin >> card1 >> card2;

    cout << (card1 == card2 || card1 > card2 ? card1 : card2) << endl;
}

string Problem1933::getName() {
    return "Tri-du";
}

int Problem1933::getNumber() {
    return 1933;
}
