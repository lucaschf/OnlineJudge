//
// Created by lucas on 01/16/2021.
//

#include "Problem1038.h"
#include <map>

void Problem1038::solve() {
    int code;
    int quantity;

    cin >> code;
    cin >> quantity;

    map<int, double> products = {
            {1, 4},
            {2, 4.5},
            {3, 5},
            {4, 2},
            {5, 1.5},
    };

    printf("Total: R$ %1.2f\n", products.find(code)->second * quantity);
}

string Problem1038::getName() {
    return "Snack";
}

int Problem1038::getNumber() {
    return 1038;
}
