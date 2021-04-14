//
// Created by lucas on 01/17/2021.
//

#include <iostream>

using namespace std;

int main() {
    int n;
    const int table_size = 10;

    cin >> n;

    for (int i = 1; i <= table_size; i++) {
        cout << i << " x " << n << " = " << i * n << endl;
    }

    return 0;
}
