//
// Created by lucas on 01/18/2021.
//

#include <iostream>

using namespace std;

int main() {
    int size;

    while (cin >> size && !cin.eof()) {
        int arr[size][size];

        int limit = (size / 3);
        int edge = size - 1;

        for (int line = 0; line < size; line++) {
            for (int column = 0; column < size; column++) {
                if (line == size / 2 && column == size / 2) {
                    arr[line][column] = 4;
                    continue;
                }

                if (line < limit || line > edge - limit) {
                    arr[line][column] = column == line ? 2 : column == edge - line ? 3 : 0;
                    continue;
                }

                arr[line][column] = column < limit || column > edge - limit ? 0 : 1;
            }
        }

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++)
                cout << arr[i][j];

            cout << endl;
        }

        cout << endl;
    }

    return 0;
}