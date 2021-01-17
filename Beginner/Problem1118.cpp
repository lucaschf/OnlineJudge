//
// Created by lucas on 01/17/2021.
//

#include <iomanip>
#include "Problem1118.h"

void Problem1118::solve() {
    double score_1 = 11;
    double score_2 = 11;

    int new_calculation_response = 1;

    while (new_calculation_response == 1) {
        do {
            cin >> score_1;

            if (score_1 < 0 || score_1 > 10)
                cout << "nota invalida" << endl;
        } while (score_1 < 0 || score_1 > 10);

        do {
            cin >> score_2;

            if (score_2 < 0 || score_2 > 10)
                cout << "nota invalida" << endl;
        } while (score_2 < 0 || score_2 > 10);

        cout << "media = " << fixed << setprecision(2) << ((score_1 + score_2) / 2) << endl;

        do {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> new_calculation_response;
        } while (new_calculation_response != 1 && new_calculation_response != 2);
    }
}

string Problem1118::getName() {
    return "Several Scores with Validation";
}
