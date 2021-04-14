//
// Created by lucas on 01/17/2021.
//

#include <iostream>

using namespace std;

int main() {
    const int size = 10;
    int x[size];

    for (int &i : x) {
        cin >> i;

        if (i <= 0)
            i = 1;
    }

    for (int i = 0; i < size; i++) {
        cout << "X[" << i << "] = " << x[i] << endl;
    }

    return 0;
}
