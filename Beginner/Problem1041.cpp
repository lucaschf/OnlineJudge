//
// Created by lucas on 01/17/2021.
//

#include "Problem1041.h"

string quadrant(double x, double y) {
    if (x == 0 && y == 0) {
        return "Origem";
    }

    if (x == 0) {
        return "Eixo Y";
    }

    if (y == 0) {
        return "Eixo X";
    }

    if (x > 0 && y < 0) {
        return "Q4";
    }

    if (x > 0 && y > 0) {
        return "Q1";
    }

    if (x < 0 && y < 0) {
        return "Q3";
    }

    return "Q2";
}

void Problem1041::solve() {
    double x;
    double y;

    cin >> x;
    cin >> y;

    cout << quadrant(x, y) << endl;
}

string Problem1041::getName() {
    return "Coordinates of a Point";
}

int Problem1041::getNumber() {
    return 1041;
}
