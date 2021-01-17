//
// Created by lucas on 01/17/2021.
//

#include "Problem1094.h"

double calculatePercentage(double amount, double from) {
    return (amount / from) * 100;
}

void Problem1094::solve() {
    int guinea_pigs = 0;
    int rabbits = 0;
    int rats = 0;
    int frogs = 0;
    int test_cases;
    char guinea_pig_type;
    int quantity;

    cin >> test_cases;

    for (int i = 0; i < test_cases; i++) {
        cin >> quantity;
        cin >> guinea_pig_type;

        guinea_pigs += quantity;

        switch (guinea_pig_type) {
            case 'C':
                rabbits += quantity;
                break;
            case 'R':
                rats += quantity;
                break;
            default :
                frogs += quantity;
                break;
        }
    }

    printf("Total: %d cobaias\n", guinea_pigs);
    printf("Total de coelhos: %d\n", rabbits);
    printf("Total de ratos: %d\n", rats);
    printf("Total de sapos: %d\n", frogs);

    printf("Percentual de coelhos: %.2f %%\n", calculatePercentage(rabbits, guinea_pigs));
    printf("Percentual de ratos: %.2f %%\n", calculatePercentage(rats, guinea_pigs));
    printf("Percentual de sapos: %.2f %%\n", calculatePercentage(frogs, guinea_pigs));
}

string Problem1094::getName() {
    return "Experiments";
}
