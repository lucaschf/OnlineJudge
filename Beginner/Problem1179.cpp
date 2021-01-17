//
// Created by lucas on 01/17/2021.
//

#include "Problem1179.h"

void Problem1179::solve() {
    const int capacity = 5;
    const int must_read = 15;

    int even[capacity];
    int odd[capacity];

    int value;

    int last_even_pos = 0;
    int last_odd_pos = 0;

    for (int i = 0; i < must_read; i++) {
        cin >> value;

        if (value % 2 == 0) {
            if (last_even_pos == capacity) {
                for (int j = 0; j < capacity; j++)
                    cout << "par[" << j << "] = " << even[j] << endl;

                last_even_pos = 0;
            }

            even[last_even_pos++] = value;
        } else {
            if (last_odd_pos == capacity) {
                for (int j = 0; j < capacity; j++)
                    cout << "impar[" << j << "] = " << odd[j] << endl;

                last_odd_pos = 0;
            }

            odd[last_odd_pos++] = value;
        }
    }

    for (int j = 0; j < last_odd_pos; j++)
        cout << "impar[" << j << "] = " << odd[j] << endl;

    for (int j = 0; j < last_even_pos; j++)
        cout << "par[" << j << "] = " << even[j] << endl;
}

string Problem1179::getName() {
    return "Array Fill IV";
}

int Problem1179::getNumber() {
    return 1179;
}
