//
// Created by lucas on 01/16/2021.
//

#include "Problem1035.h"

bool isAccepted(int a, int b, int c, int d) {
    if (b <= c || d <= a)
        return false;

    if (c + d <= a + b)
        return false;

    if (c < 0 || d < 0)
        return false;

    return a % 2 == 0;
}

void Problem1035::solve() {
    int a;
    int b;
    int c;
    int d;

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    cout << "Valores " << (!isAccepted(a, b, c, d) ? "nao " : "") << "aceitos" << endl;
}

string Problem1035::getName() {
    return "Selection Test 1";
}

int Problem1035::getNumber() {
    return 1035;
}
