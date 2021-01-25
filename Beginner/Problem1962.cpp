//
// Created by lucas on 01/25/2021.
//

#include "Problem1962.h"

void Problem1962::solve() {
    const int baseYear = 2015;
    int lines;
    int year;
    int result;

    cin >> lines;

    for (int i = 0; i < lines; i++) {
        cin >> year;

        if (baseYear == year)
            result = 1;
        else
            result = baseYear < year ? abs(baseYear - 1 - year) : baseYear - year;

        cout << result << (baseYear <= year ? " A.C." : " D.C.") << endl;
    }
}

string Problem1962::getName() {
    return "A Long, Long Time Ago";
}

int Problem1962::getNumber() {
    return 1962;
}
