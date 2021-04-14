//
// Created by lucas on 01/17/2021.
//

#include <iostream>

using namespace std;

int main() {
    int count;
    int n;
    int sum;

    cin >> count;

    for (int i = 0; i < count; i++) {
        cin >> n;

        sum = 0;

        for (int j = 1; j < n; j++) {
            if (n % j == 0)
                sum += j;

            if (sum > n)
                break;
        }

        cout << n << (sum == n ? " eh perfeito" : " nao eh perfeito") << endl;
    }

    return 0;
}
