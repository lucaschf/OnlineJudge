//
// Created by lucas on 01/18/2021.
//

#include <iostream>

using namespace std;

int main() {
    int complaints;

    while (cin >> complaints && !cin.eof()) {
        cout << (complaints == 0 ? "vai ter copa!" : "vai ter duas!") << endl;
    }

    return 0;
}
