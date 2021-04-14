//
// Created by lucas on 01/16/2021.
//

#include <iostream>

using namespace std;

int main(){
    const int banknote_values[] = {100, 50, 20, 10, 5, 2, 1};
    int requested;

    cin >> requested;

    cout << requested << endl;

    for (int banknote_value : banknote_values) {
        int quantity = 0;
        if (requested >= banknote_value) {
            quantity = requested / banknote_value;
            requested = requested % banknote_value;
        }

        cout << quantity << " nota(s) de R$ " << banknote_value << ",00" << endl;
    }

    return 0;
}
