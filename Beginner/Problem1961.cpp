//
// Created by lucas on 01/25/2021.
//

#include "Problem1961.h"

void Problem1961::solve() {
    int jumpHeight;
    int pipesCount;

    cin >> jumpHeight >> pipesCount;
    int pipes[pipesCount];

    for (int i = 0; i < pipesCount; i++) {
        cin >> pipes[i];
    }

    for (int i = 1; i < pipesCount; i++) {
        if (abs(pipes[i - 1] - pipes[i]) > jumpHeight) {
            cout << "GAME OVER" << endl;
            return;
        }
    }

    cout << "YOU WIN" << endl;
}

string Problem1961::getName() {
    return "Jumping Frog";
}

int Problem1961::getNumber() {
    return 1961;
}
