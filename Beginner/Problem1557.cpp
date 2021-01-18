//
// Created by lucas on 01/18/2021.
//

#include <iomanip>
#include <cmath>
#include "Problem1557.h"

int count_digits(int number);

void Problem1557::solve() {
    int size;

    while ((cin >> size) && size != 0) {
        int arr[size][size];

        for (int i = 0; i < size; i++) {
            int value = pow(2, i);

            for (int j = 0; j < size; j++) {
                arr[i][j] = value;
                value *= 2;
            }
        }

        int digits = count_digits(arr[size - 1][size - 1]);
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                cout << setw(j == 0 ? digits : digits + 1) << arr[i][j];
            }

            cout << endl;
        }

        cout << endl;
    }
}

int count_digits(int number) {
    int a = 0;

    if (number == 0) {
        number = 1;
    }
    while (number > 0) {
        number = number / 10;
        a++;
    }

    return a;
}

string Problem1557::getName() {
    return "Square Matrix III";
}

int Problem1557::getNumber() {
    return 1557;
}
