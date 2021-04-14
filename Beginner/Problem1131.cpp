//
// Created by lucas on 01/17/2021.
//

#include <iostream>

using namespace std;

int main() {
    int gremio;
    int inter;

    int new_grenal = 1;

    int gremio_victories = 0;
    int ties = 0;
    int inter_victories = 0;
    int grenais = 0;

    while (new_grenal == 1) {
        cin >> inter;
        cin >> gremio;

        grenais++;

        if (inter == gremio)
            ties++;
        else if (inter > gremio)
            inter_victories++;
        else
            gremio_victories++;

        do {
            cout << "Novo grenal (1-sim 2-nao)" << endl;
            cin >> new_grenal;
        } while (new_grenal != 1 && new_grenal != 2);
    }

    cout << grenais << " grenais" << endl;
    cout << "Inter:" << inter_victories << endl;
    cout << "Gremio:" << gremio_victories << endl;
    cout << "Empates:" << ties << endl;

    if (inter_victories == gremio_victories)
        cout << "Não houve vencedor" << endl;
    else
        cout << (inter_victories > gremio_victories ? "Inter venceu mais" : "Inter Gremio mais") << endl;

    return 0;
}
