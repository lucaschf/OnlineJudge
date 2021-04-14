//
// Created by lucas on 01/17/2021.
//

#include <iostream>

using namespace std;

int main() {
    const int quantity = 100;
    int position = 0;
    int highest = 0;
    int value;

    for (int i = 1; i <= quantity; i++) {
        cin >> value;

        if (value > highest) {
            highest = value;
            position = i;
        }
    }

    cout << highest << endl << position << endl;

    return 0;
}
