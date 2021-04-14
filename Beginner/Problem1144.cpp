//
// Created by lucas on 01/17/2021.
//

#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    int columns = 3;

    for (int i = 1; i <= n; i++) {
        int column_value = i;

        for (int j = 0; j < columns; j++) {
            cout << column_value;

            if (j < columns - 1)
                cout << " ";

            column_value *= i;
        }
        cout << endl;

        column_value = i;
        cout << column_value << " ";
        for (int j = 1; j < columns; j++) {
            column_value *= i;
            cout << column_value + 1;

            if (j < columns - 1)
                cout << " ";
        }

        cout << endl;
    }
    
    return 0;
}
