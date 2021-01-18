//
// Created by lucas on 01/17/2021.
//

#include "Problem1914.h"

typedef struct Player {
    string name;
    string choice;
    int number = 0;
} Player;

void Problem1914::solve() {
    const string ODD = "IMPAR";
    const string EVEN = "PAR";

    int testCases;
    Player player1;
    Player player2;

    cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        cin >> player1.name;
        cin >> player1.choice;

        cin >> player2.name;
        cin >> player2.choice;

        cin >> player1.number;
        cin >> player2.number;

        string result;

        result = (player2.number + player1.number) % 2 == 0 ? EVEN : ODD;
        cout << (player1.choice == result ? player1 : player2).name << endl;
    }
}

string Problem1914::getName() {
    return "Whose Turn Is It?";
}

int Problem1914::getNumber() {
    return 1914;
}
