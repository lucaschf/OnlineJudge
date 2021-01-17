//
// Created by lucas on 01/17/2021.
//

#include "Problem1117.h"
#include <iomanip>

double read_score();

void Problem1117::solve() {
    double score_1;
    double score_2;

    score_1 = read_score();
    score_2 = read_score();

    cout << fixed << setprecision(2) << "media = " << (score_1 + score_2) / 2 << endl;
}

double read_score() {
    double score = -1;
    bool first_read = true;

    while (score < 0 || score > 10) {
        if (first_read) {
            first_read = false;
        } else
            cout << "nota invalida" << endl;

        cin >> score;
    }

    return score;
}


string Problem1117::getName() {
    return "Score Validation";
}

int Problem1117::getNumber() {
    return 1117;
}
