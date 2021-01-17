//
// Created by lucas on 01/17/2021.
//

#include "Problem1044.h"

void Problem1044::solve() {
    int a;
    int b;

    cin >> a;
    cin >> b;

    printf("%s\n", a % b == 0 || b % a == 0 ? "Sao Multiplos" : "Nao sao Multiplos");
}

string Problem1044::getName() {
    return "Multiples";
}
