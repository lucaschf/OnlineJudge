//
// Created by lucas on 01/17/2021.
//

#include "Problem1066.h"

void Problem1066::solve() {
    const int count = 5;
    int even = 0;
    int odd = 0;
    int positives = 0;
    int negatives = 0;

    int value;
    for (int i = 0; i < count; i++) {
        cin >> value;

        value % 2 == 0 ? even++ : odd++;

        if (value > 0)
            positives++;
        else if (value < 0)
            negatives++;
    }

    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", positives);
    printf("%d valor(es) negativo(s)\n", negatives);
}

string Problem1066::getName() {
    return "Even, Odd, Positive and Negative";
}
