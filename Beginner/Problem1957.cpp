//
// Created by lucas on 01/20/2021.
//

#include "Problem1957.h"

void Problem1957::solve() {
    int decimal;
    string hexadecimal;

    cin >> decimal;

    while (decimal != 0) {
        int temp = decimal % 16;

        char c = temp + (temp < 10 ? 48 : 55);
        hexadecimal = c + hexadecimal;
        decimal /= 16;
    }

    cout << hexadecimal << endl;
}

string Problem1957::getName() {
    return "Converting to Hexadecimal";
}

int Problem1957::getNumber() {
    return 1957;
}
