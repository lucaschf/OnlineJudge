//
// Created by lucas on 01/16/2021.
//

#include "Problem1014.h"

void Problem1014::solve() {
    int traveled_distance;
    double fuel_spent;

    cin >> traveled_distance;
    cin >> fuel_spent;

    printf("%1.3f km/l\n", traveled_distance / fuel_spent);
}

string Problem1014::getName() {
    return "Consumption";
}
