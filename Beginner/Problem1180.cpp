//
// Created by lucas on 01/17/2021.
//

#include "Problem1180.h"

void Problem1180::solve() {
    int capacity;
    int lowest;
    int position = 0;

    cin >> capacity;

    int arr[capacity];

    cin >> arr[0];
    lowest = arr[0];

    for (int i = 1; i < capacity; i++) {
        cin >> arr[i];

        if (arr[i] < lowest) {
            lowest = arr[i];
            position = i;
        }
    }

    cout << "Menor valor: " << lowest << endl;
    cout << "Posicao: " << position << endl;
}

string Problem1180::getName() {
    return "Lowest Number and Position";
}

int Problem1180::getNumber() {
    return 1180;
}
