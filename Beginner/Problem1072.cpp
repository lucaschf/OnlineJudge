//
// Created by lucas on 01/17/2021.
//

#include <iostream>

using namespace std;

int main() {
    int n;
    int value;
    int in_range = 0;
    int out_of_range = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> value;

        if (value >= 10 && value <= 20)
            in_range++;
        else
            out_of_range++;
    }

    cout << in_range << " in" << endl << out_of_range << " out" << endl;

    return 0;
}