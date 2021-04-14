//
// Created by lucas on 01/17/2021.
//

#include <iostream>

using namespace std;

int main() {
    int n;
    int value;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> value;

        if (value == 0)
            cout << "NULL" << endl;
        else {
            cout << (value % 2 == 0 ? "EVEN " : "ODD ");
            cout << (value > 0 ? "POSITIVE" : "NEGATIVE");
            cout << endl;
        }
    }

    return 0;
}