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
        int val = i;

        for (int j = 0; j < columns; j++) {
            cout << val;

            if (j < columns - 1)
                cout << " ";

            val *= i;
        }

        cout << endl;
    }

    return 0;
}