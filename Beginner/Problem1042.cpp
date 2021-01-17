//
// Created by lucas on 01/17/2021.
//

#include "Problem1042.h"

void Problem1042::solve() {
    const int size = 3;
    int values[size];
    int aux[size];

    for (int i = 0; i < size; i++) {
        cin >> values[i];
        aux[i] = values[i];
    }

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (aux[i] > aux[j]) {
                int temp = aux[i];
                aux[i] = aux[j];
                aux[j] = temp;
            }
        }
    }

    for (int value : aux)
        cout << value << endl;

    cout << endl;

    for (int value : values)
        cout << value << endl;
}

string Problem1042::getName() {
    return "Simple Sort";
}
