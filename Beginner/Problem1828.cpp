//
// Created by lucas on 01/18/2021.
//

#include <vector>
#include <map>
#include "Problem1828.h"

void Problem1828::solve() {
    int times_played;
    string sheldon_choice;
    string raj_choice;

    cin >> times_played;

    map<string, vector<string>> options = {
            {"tesoura", {"papel",   "lagarto"}},
            {"papel",   {"pedra",   "Spock"}},
            {"pedra",   {"lagarto", "tesoura"}},
            {"lagarto", {"Spock",   "papel"}},
            {"Spock",   {"tesoura", "pedra"}}
    };

    for (int i = 0; i < times_played; i++) {
        cin >> sheldon_choice;
        cin >> raj_choice;

        cout << "Caso #" << i + 1 << ": ";

        if (raj_choice == sheldon_choice) {
            cout << "De novo!" << endl;
            continue;
        }

        string result = "Raj trapaceou!";

        for (auto &ch : options.find(sheldon_choice)->second) {
            if (ch == raj_choice) {
                result = "Bazinga!";
            }
        }

        cout << result << endl;
    }
}

string Problem1828::getName() {
    return "Bazinga!";
}

int Problem1828::getNumber() {
    return 1828;
}
