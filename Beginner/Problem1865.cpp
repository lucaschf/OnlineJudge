//
// Created by lucas on 01/18/2021.
//

#include "Problem1865.h"

void Problem1865::solve() {
    int persons;
    string name;
    int force;

    cin >> persons;

    for (int i = 0; i < persons; i++) {
        cin >> name;
        cin >> force;

        cout << (name == "Thor" ? "Y" : "N") << endl;
    }
}

string Problem1865::getName() {
    return "Mjölnir";
}

int Problem1865::getNumber() {
    return 1865;
}
