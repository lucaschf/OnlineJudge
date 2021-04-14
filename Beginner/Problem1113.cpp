//
// Created by lucas on 01/17/2021.
//

#include <iostream>

using namespace std;

int main() {
    int x;
    int y;

    while (true) {
        cin >> x;
        cin >> y;

        if (x == y)
            break;

        cout << (x > y ? "Decrescente" : "Crescente") << endl;
    }

    return 0;
}