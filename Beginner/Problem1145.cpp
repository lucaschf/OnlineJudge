//
// Created by lucas on 01/17/2021.
//

#include <iostream>

using namespace std;

int main() {
    int values;
    int columns;

    cin >> columns;
    cin >> values;

    int current_column = 0;

    for (int i = 1; i <= values; i++) {
        current_column++;

        if (current_column == columns) {
            cout << i << endl;
            current_column = 0;
            continue;
        }

        cout << i << " ";
    }

    return 0;
}