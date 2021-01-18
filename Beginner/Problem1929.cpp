//
// Created by lucas on 01/18/2021.
//

#include "Problem1929.h"

bool makeTriangle(int a, int b, int c);

void Problem1929::solve() {
    int rod1;
    int rod2;
    int rod3;
    int rod4;

    cin >> rod1;
    cin >> rod2;
    cin >> rod3;
    cin >> rod4;

    if (makeTriangle(rod1, rod2, rod3) ||
        makeTriangle(rod1, rod3, rod4) || makeTriangle(rod1, rod2, rod4) || makeTriangle(rod2, rod3, rod4))
        cout << "S" << endl;
    else
        cout << "N" << endl;
}

bool makeTriangle(int a, int b, int c) {
    return !(a + b <= c || a + c <= b || b + c <= a);
}

string Problem1929::getName() {
    return "Triangle";
}

int Problem1929::getNumber() {
    return 1929;
}
