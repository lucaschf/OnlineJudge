//
// Created by lucas on 01/18/2021.
//

#include <iostream>

using namespace std;

int main() {
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
    
    return 0;
}
