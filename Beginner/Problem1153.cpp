//
// Created by lucas on 01/17/2021.
//

#include <iostream>

using namespace std;

int main() {
    int number;
    int fat = 1;

    cin >> number;

    for (int i = 1; i <= number; i++) {
        fat *= i;
    }

    cout << fat << endl;

    return 0;
}
