//
// Created by lucas on 01/16/2021.
//

#include "Problem1019.h"

void Problem1019::solve() {
    int seconds;

    cin >> seconds;

    int hours = 0;
    int minutes = seconds / 60;
    seconds = seconds - minutes * 60;

    if (minutes > 59) {
        hours = minutes / 60;
        minutes = minutes - hours * 60;
    }

    cout << hours << ":" << minutes << ":" << seconds << endl;
}

string Problem1019::getName() {
    return "Time Conversion";
}

int Problem1019::getNumber() {
    return 1019;
}
