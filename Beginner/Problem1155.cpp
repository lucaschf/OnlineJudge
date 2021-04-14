//
// Created by lucas on 01/17/2021.
//

#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    double sum = 1;

    for (int i = 2; i <= 100; i++) {
        sum += 1.0 / i;
    }

    cout << fixed << setprecision(2) << sum << endl;

    return 0;
}
