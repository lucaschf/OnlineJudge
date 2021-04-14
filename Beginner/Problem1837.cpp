//
// Created by lucas on 01/18/2021.
//

#include <iostream>

using namespace std;

int main() {
    int a;
    int b;

    cin >> a;
    cin >> b;

    auto r = (a % b);
    if (r < 0) {
        r += abs(b);
    }

    auto q = (a - r) / b;

    cout << q << " " << r << endl;

    return 0;
}
