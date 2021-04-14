//
// Created by lucas on 01/17/2021.
//

#include <iostream>

using namespace std;

int main() {
    int x;
    int y;

    cin >> x;
    cin >> y;

    int aux;
    int sum = 0;

    if (x < y) {
        aux = x;
        x = y;
        y = aux;
    }

    for (x = x - 1; x > y; x--) {
        if (x % 2 != 0) {
            sum += x;
        }
    }

    cout << sum << endl;

    return 0;
}