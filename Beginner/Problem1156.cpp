//
// Created by lucas on 01/17/2021.
//

#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    double sum = 0;
    double denominator = 1;

    for (int i = 1; i <= 39; i += 2) {
        sum += i / denominator;
        denominator *= 2;
    }

    cout << fixed << setprecision(2) << sum << endl;

    return 0;
}
