//
// Created by lucas on 01/16/2021.
//

#include <iostream>

using namespace std;

int main() {
    int traveled_distance;
    double fuel_spent;

    cin >> traveled_distance;
    cin >> fuel_spent;

    printf("%1.3f km/l\n", traveled_distance / fuel_spent);

    return 0;
}