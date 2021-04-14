//
// Created by lucas on 01/17/2021.
//
#include <iostream>

using namespace std;

int main() {
    const int size = 1000;
    int arr[size];
    int biggest;
    int count = 0;

    cin >> biggest;

    while (count < size) {
        for (int i = 0; i < biggest && count < size; i++) {
            arr[count++] = i;
        }
    }

    for (int i = 0; i < size; i++) {
        cout << "N[" << i << "] = " << arr[i] << endl;
    }

    return 0;
}
