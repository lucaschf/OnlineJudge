//
// Created by lucas on 01/17/2021.
//

#include <iostream>

using namespace std;

int main() {
    const int quantity = 6;
    int n;
    int count = 0;

    cin >> n;

    while (count < quantity) {
        if (n % 2 != 0) {
            cout << n << endl;
            count++;
        }

        n++;
    }

    return 0;
}
