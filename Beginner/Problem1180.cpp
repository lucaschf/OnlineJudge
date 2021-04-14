//
// Created by lucas on 01/17/2021.
//

#include <iostream>

using namespace std;

int main() {
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

    return 0;
}
