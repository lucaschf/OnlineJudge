//
// Created by lucas on 01/18/2021.
//

#include "Problem1435.h"

void Problem1435::solve() {
    int size;
    int greatest_element;
    int limit;

    while ((cin >> size) && (size != 0)) {
        int arr[size][size];

        greatest_element = (size % 2 == 0 ? size / 2 : (size + 1) / 2);
        arr[greatest_element - 1][greatest_element - 1] = greatest_element;

        for (int line = 0; line < greatest_element; line++) {
            limit = (size - 1) - line;

            for (int column = line; column <= limit; column++) {
                auto value = line + 1;

                arr[line][column] = value;
                arr[limit][column] = value;

                arr[column][line] = value;
                arr[column][limit] = value;
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

string Problem1435::getName() {
    return "Square Matrix I";
}

int Problem1435::getNumber() {
    return 1435;
}
