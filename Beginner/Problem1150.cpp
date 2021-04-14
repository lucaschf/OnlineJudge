//
// Created by lucas on 01/17/2021.
//


#include <iostream>

using namespace std;

int main() {
    int x;
    int z;

    cin >> x;
    cin >> z;

    while (z <= x)
        cin >> z;

    int sum = x;
    int count = 1;

    while (sum < z) {
        x += 1;
        sum += x;
        count++;
    }

    cout << count << endl;

    return 0;
}
