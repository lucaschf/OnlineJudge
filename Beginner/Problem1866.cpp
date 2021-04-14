//
// Created by lucas on 01/17/2021.
//

#include <iostream>

using namespace std;

int main() {
    int n;
    int elements;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> elements;
        cout << (elements % 2 != 0 ? 1 : 0) << endl;
    }

    return 0;
}
