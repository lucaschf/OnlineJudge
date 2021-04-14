//
// Created by lucas on 01/17/2021.
//

#include <iostream>

using namespace std;

int main() {
    int a;
    int n = 0;

    cin >> a;

    while (n <= 0) {
        cin >> n;
    }

    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += a + i;

    cout << sum << endl;

    return 0;
}
