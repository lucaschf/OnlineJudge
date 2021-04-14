//
// Created by lucas on 01/25/2021.
//

#include <iostream>

using namespace std;

int main() {
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

    return 0;
}
