//
// Created by lucas on 01/18/2021.
//

#include <iostream>

using namespace std;

int main() {
    int number_of_persons;

    int guess;
    int person_number;
    int temp;

    cin >> number_of_persons;
    cin >> guess;

    person_number = 1; // first person

    for (int i = 1; i < number_of_persons; i++) {
        cin >> temp;

        if (temp < guess) {
            guess = temp;
            person_number = i + 1;
        }
    }

    cout << person_number << endl;

    return 0;
}

