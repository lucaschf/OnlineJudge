//
// Created by lucas on 01/16/2021.
//

#include "Problem1037.h"

void Problem1037::solve() {
    double value;

    cin >> value;

    if (value < 0 || value > 100) {
        cout << "Fora de intervalo" << endl;
        return;
    }

    cout << "Intervalo ";

    if (value <= 25) {
        cout << "[0,25]" << endl;
        return;
    }

    if (value <= 50) {
        cout << "(25,50]" << endl;
        return;
    }

    if (value <= 75) {
        cout << "(50,75]" << endl;
        return;
    }

    cout << "(75,100]" << endl;

}

string Problem1037::getName() {
    return "Interval";
}
