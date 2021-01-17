//
// Created by lucas on 01/16/2021.
//

#include <map>
#include "iostream"
#include "Problem.h"
#include "Beginner/BeginnerProblemsList.h"


using namespace std;

int main() {
    const map<int, Problem *> beginner = BeginnerProblemsList().list();
    const string message = "Enter the problem number or 0 to finish.";

    int chosen;

    cout << message << endl;

    while (cin >> chosen && chosen > 0) {
        auto it = beginner.find(chosen);

        if (it == beginner.end()) {
            cout << "Sorry, this problem does not exist or has not been solved yet." << endl << endl;
            cout << message << endl;
            continue;
        }

        auto problem = it->second;
        cout << endl << problem->getName() << " - " << problem->getUrl() << endl;
        problem->solve();

        cout << endl << message << endl;
    }

    return 0;
}