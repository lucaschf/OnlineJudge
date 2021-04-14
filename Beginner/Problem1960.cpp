//
// Created by lucas on 01/24/2021.
//

#include <map>
#include <iostream>

using namespace std;

int main() {
    int number;

    map<int, string> romans = {
            {1,    "I"},
            {4,    "IV"},
            {5,    "V"},
            {9,    "IX"},
            {10,   "X"},
            {40,   "XL"},
            {50,   "L"},
            {90,   "XC"},
            {100,  "C"},
            {400,  "CD"},
            {500,  "D"},
            {900,  "CM"},
            {1000, "M"}
    };

    cin >> number;
    for (auto i = romans.rbegin(); i != romans.rend() && number != 0; i++) {
        auto value = i->first;
        if (number >= value) {
            auto c = number / value;
            number = number % value;

            for (int j = 0; j < c; j++)
                cout << i->second;
        }
    }

    cout << endl;

    return 0;
}
