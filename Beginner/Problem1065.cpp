//
// Created by lucas on 01/17/2021.
//

#include <iostream>

using namespace std;

int main() {
    const int count = 5;
    int even = 0;

    int value;
    for (int i = 1; i <= count; i++) {
        cin >> value;

        if (value % 2 == 0) {
            even++;
        }
    }

    printf("%d valores pares\n", even);

    return 0;
}