//
// Created by lucas on 01/18/2021.
//

#include "Problem1864.h"

void Problem1864::solve() {
    string quote = "LIFE IS NOT A PROBLEM TO BE SOLVED, BUT A REALITY TO BE EXPERIENCED.";

    int number;
    cin >> number;

    for (int i = 0; i < number; i++) {
        cout << quote[i];
    }

    cout << endl;
}

string Problem1864::getName() {
    return "Our Days Are Never Coming Back";
}

int Problem1864::getNumber() {
    return 1864;
}
