//
// Created by lucas on 01/18/2021.
//

#include "Problem1930.h"

void Problem1930::solve() {
    int t1;
    int t2;
    int t3;
    int t4;

    cin >> t1 >> t2 >> t3 >> t4;

    int devices = (t1 + t2 + t3 + t4) - 3;

    cout << devices << endl;
}

string Problem1930::getName() {
    return "Electrical Outlet";
}

int Problem1930::getNumber() {
    return 1930;
}
