//
// Created by lucas on 01/18/2021.
//

#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int a;
    int b;
    int c;

    while ((cin >> a) && a != 0) {
        cin >> b;
        cin >> c;

        auto area = a * b * 100 / c;

        cout << (int) sqrt(area) << endl;
    }

    return 0;
}
