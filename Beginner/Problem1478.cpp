//
// Created by lucas on 01/18/2021.
//

#include "Problem1478.h"

void Problem1478::solve() {
    int size;

    while ((cin >> size) && (size != 0)) {
        int arr[size][size];

        for (int line = 0; line < size; line++) {
            arr[line][0] = line + 1;

            for (int column = line; column >= 0; column--) {
                arr[line][column] = line - (column - 1);
            }

            arr[line][line] = 1;

            int value = 1;
            for (int column = line + 1; column < size; column++) {
                arr[line][column] = ++value;
            }
        }

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (j == 0)
                    printf("%3d", arr[i][j]);
                else
                    printf("%4d", arr[i][j]);
            }

            cout << endl;
        }

        cout << endl;
    }
}

string Problem1478::getName() {
    return "Square Matrix II";
}

int Problem1478::getNumber() {
    return 1478;
}
