//
// Created by lucas on 01/17/2021.
//

#include <iostream>

using namespace std;

int main() {
    int sequence_size;

    while ((cin >> sequence_size) && sequence_size != 0) {
        for (int i = 1; i <= sequence_size; i++) {
            cout << i;
            cout << (i == sequence_size ? "\n" : " ");
        }
    }

    return 0;
}
