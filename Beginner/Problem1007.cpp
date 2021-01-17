//
// Created by lucas on 01/16/2021.
//

#include "Problem1007.h"

void Problem1007::solve() {
    int a;
    int b;
    int c;
    int d;

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    printf("DIFERENCA = %d\n", (a * b) - (c * d));
}

string Problem1007::getName() {
    return "Difference";
}
