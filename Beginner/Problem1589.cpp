//
// Created by lucas on 01/18/2021.
//

#include <iostream>

using namespace std;

int main() {
    int count;
    int radius1;
    int radius2;

    cin >> count;

    for (int i = 0; i < count; i++) {
        cin >> radius1;
        cin >> radius2;

        cout << radius2 + radius1 << endl;
    }

    return 0;
}
