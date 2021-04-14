//
// Created by lucas on 01/17/2021.
//

#include <iomanip>
#include <iostream>

using namespace std;

double read_score();

int main() {
    double score_1;
    double score_2;

    score_1 = read_score();
    score_2 = read_score();

    cout << fixed << setprecision(2) << "media = " << (score_1 + score_2) / 2 << endl;

    return 0;
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