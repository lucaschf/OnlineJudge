//
// Created by lucas on 01/17/2021.
//

#include "Problem1052.h"
#include <map>

void Problem1052::solve() {
    map<int, string> months = {
            {1,  "January"},
            {2,  "February"},
            {3,  "March"},
            {4,  "April"},
            {5,  "May"},
            {6,  "June"},
            {7,  "July"},
            {8,  "August"},
            {9,  "September"},
            {10, "October"},
            {11, "November"},
            {12, "December"}
    };

    int month;
    cin >> month;

    cout << months.find(month)->second << endl;
}

string Problem1052::getName() {
    return "Month";
}

int Problem1052::getNumber() {
    return 1052;
}
