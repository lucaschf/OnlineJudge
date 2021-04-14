//
// Created by lucas on 01/18/2021.
//

#include <iostream>

using namespace std;

int main() {
    int size;

    while (cin >> size && !cin.eof()) {
        int arr[size][size];

        for (int line = 0; line < size; line++) {
            arr[line][line] = 1;

            for (int column = 0; column < size; column++) {
                if (size - 1 - column == line)
                    arr[line][column] = 2;
                else if (column != line)
                    arr[line][column] = 3;
            }
        }

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                cout << arr[i][j];
            }

            cout << endl;
        }
    }

    return 0;
}