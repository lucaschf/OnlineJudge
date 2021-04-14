//
// Created by lucas on 01/17/2021.
//

#include <iostream>

using namespace std;

int main() {
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

    return 0;
}
