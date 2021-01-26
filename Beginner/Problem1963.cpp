//
// Created by lucas on 01/26/2021.
//

#include <iomanip>
#include "Problem1963.h"

void Problem1963::solve() {
    double startingValue;
    double endValue;

    cin >> startingValue >> endValue;

    double sizeIncrease = endValue - startingValue;
    double percentageIncrease = (sizeIncrease / startingValue) * 100.0;

    cout << fixed << setprecision(2) << percentageIncrease << "%" << endl;
}

string Problem1963::getName() {
    return "The Motion Picture";
}

int Problem1963::getNumber() {
    return 1963;
}
