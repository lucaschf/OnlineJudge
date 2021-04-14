//
// Created by lucas on 01/17/2021.
//

#include <iostream>

using namespace std;

int main() {
    double number;
    int positives = 0;

    for (int i = 0; i < 6; i++) {
        cin >> number;
        if (number > 0)
            positives++;
    }

    cout << positives << " valores positivos" << endl;

    return 0;
}