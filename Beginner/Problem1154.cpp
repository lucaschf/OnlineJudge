//
// Created by lucas on 01/17/2021.
//

#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int age;
    int count = 0;
    double sum = 0;

    cin >> age;

    while (age > 0) {
        count++;
        sum += age;
        cin >> age;
    }

    double average = sum / count;

    cout << fixed << setprecision(2) << average << endl;

    return 0;
}
