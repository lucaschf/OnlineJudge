//
// Created by lucas on 01/16/2021.
//

#include "Problem1008.h"

void Problem1008::solve() {
    int workerNumber;
    int workedHours;
    float hourValue;

    cin >> workerNumber;
    cin >> workedHours;
    cin >> hourValue;

    printf("NUMBER = %d\nSALARY = U$ %1.2f\n", workerNumber, hourValue * workedHours);
}

string Problem1008::getName() {
    return "Salary";
}

int Problem1008::getNumber() {
    return 1008;
}
