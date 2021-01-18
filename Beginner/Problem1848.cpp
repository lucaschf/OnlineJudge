//
// Created by lucas on 01/18/2021.
//

#include "Problem1848.h"

void Problem1848::solve() {
    const char opened_eye = '*';
    const string scream = "caw caw";
    const int eyes_count = 3;
    const int winners = 3;
    const int eye_values[eyes_count] = {4, 2, 1};

    string action;
    int sum = 0;
    int result = 0;

    while (result < winners) {
        getline(std::cin, action);

        if (action == scream) {
            cout << sum << endl;
            sum = 0;
            result++;
            continue;
        }

        for (int i = 0; i < eyes_count; i++)
            if (action[i] == opened_eye)
                sum += eye_values[i];
    }
}

string Problem1848::getName() {
    return "Counting Crow";
}

int Problem1848::getNumber() {
    return 1848;
}
