//
// Created by lucas on 01/20/2021.
//

#include <iostream>

using namespace std;

int main() {
    int decimal;
    string hexadecimal;

    cin >> decimal;

    while (decimal != 0) {
        int temp = decimal % 16;

        char c = temp + (temp < 10 ? 48 : 55);
        hexadecimal = c + hexadecimal;
        decimal /= 16;
    }

    cout << hexadecimal << endl;

    return 0;
}
