//
// Created by lucas on 01/16/2021.
//

#include "Problem1017.h"

void Problem1017::solve() {
    const double kilometers_per_liter = 12;

    double spent_time;
    double average_speed;

    cin >> spent_time;
    cin >> average_speed;

    auto distance = average_speed * spent_time;
    auto fuel_spent = distance / kilometers_per_liter;

    printf("%1.3f\n", fuel_spent);
}

string Problem1017::getName() {
    return "Fuel Spent";
}