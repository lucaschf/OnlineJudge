//
// Created by lucas on 01/17/2021.
//

#include <iostream>

using namespace std;

int main() {
    int count;
    int n;

    bool is_prime;

    cin >> count;

    for (int i = 0; i < count; i++) {
        cin >> n;

        is_prime = true;

        for (int j = n / 2; j > 1 && is_prime; j--) {
            is_prime = n % j != 0;
        }

        cout << n << (is_prime ? " eh primo" : " nao eh primo") << endl;
    }

    return 0;
}
