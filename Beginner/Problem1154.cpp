//
// Created by lucas on 01/17/2021.
//

#include <iomanip>
#include "Problem1154.h"

void Problem1154::solve() {
    int age;
    int count = 0;
    double sum = 0;

    cin >> age;

    while (age > 0) {
        count++;
        sum += age;
        cin >> age;
    }

    double average = sum / count;

    cout << fixed << setprecision(2) << average << endl;
}

string Problem1154::getName() {
    return "Ages";
}

int Problem1154::getNumber() {
    return 1154;
}
