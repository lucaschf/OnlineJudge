//
// Created by lucas on 01/17/2021.
//

#include "Problem1142.h"

void Problem1142::solve() {
    int n;

    cin >> n;
    int current = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", current);
            current++;
        }
        printf("PUM\n");
        current++;
    }
}

string Problem1142::getName() {
    return "PUM";
}
