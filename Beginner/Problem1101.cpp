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

        if (x <= 0 || y <= 0)
            break;

        if (x > y) {
            int aux = x;
            x = y;
            y = aux;
        }

        int sum = 0;
        for (; x <= y; x++) {
            cout << x << " ";
            sum += x;
        }

        cout << "Sum=" << sum << endl;
    }
    
    return 0;
}