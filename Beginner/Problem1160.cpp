//
// Created by lucas on 01/17/2021.
//

#include "Problem1160.h"

void Problem1160::solve() {
    int test_cases;
    int years;

    int population_a;
    int population_b;

    double growing_rate_a;
    double growing_rate_b;

    cin >> test_cases;

    for (int i = 0; i < test_cases; i++) {
        cin >> population_a;
        cin >> population_b;

        cin >> growing_rate_a;
        cin >> growing_rate_b;

        years = 0;

        while (population_a <= population_b && years <= 100) {
            population_a = (int) (population_a * (1 + growing_rate_a / 100));
            population_b = (int) (population_b * (1 + growing_rate_b / 100));

            years++;
        }

        years > 100 ? cout << "Mais de 1 seculo.\n" : cout << years << " anos.\n";
    }
}

string Problem1160::getName() {
    return "Population Increase";
}

int Problem1160::getNumber() {
    return 1160;
}
