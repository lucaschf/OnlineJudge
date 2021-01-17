//
// Created by lucas on 01/16/2021.
//

#include <cmath>
#include "Problem1036.h"

void Problem1036::solve() {
    double a;
    double b;
    double c;

    cin >> a;
    cin >> b;
    cin >> c;

    auto delta = pow(b, 2) - (4 * a * c);

    if (delta < 0 || a == 0) {
        cout << "Impossivel calcular" << endl;
        return;
    }

    auto root1 = (-b + sqrt(delta)) / (2 * a);
    auto root2 = (-b - sqrt(delta)) / (2 * a);

    printf("R1 = %1.5f\n", root1);
    printf("R2 = %1.5f\n", root2);
}

string Problem1036::getName() {
    return "Bhaskara's Formula";
}

int Problem1036::getNumber() {
    return 1036;
}
