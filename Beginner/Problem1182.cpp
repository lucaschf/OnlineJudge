//
// Created by lucas on 01/18/2021.
//

#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    const int size = 12;
    double arr[size][size];
    int column;
    char operation;
    double result = 0;

    cin >> column;
    cin >> operation;

    for (auto &i : arr) {
        for (auto &j : i) {
            cin >> j;
        }
    }

    for (auto &i : arr)
        result += i[column];

    if (operation == 'M') {
        result /= size;
    }

    cout << fixed << setprecision(1) << result << endl;

    return 0;
}