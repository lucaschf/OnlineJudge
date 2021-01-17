//
// Created by lucas on 01/17/2021.
//

#include "Problem1114.h"

void Problem1114::solve() {
    const int valid_password = 2002;
    int inserted;

    while (true) {
        cin >> inserted;

        if (inserted == valid_password) {
            cout << "Acesso Permitido" << endl;
            break;
        }

        cout << "Senha Invalida" << endl;
    }
}

string Problem1114::getName() {
    return "Fixed Password";
}
