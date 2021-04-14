//
// Created by lucas on 01/16/2021.
//

#include <iostream>

using namespace std;

int main() {
    int seconds;

    cin >> seconds;

    int hours = 0;
    int minutes = seconds / 60;
    seconds = seconds - minutes * 60;

    if (minutes > 59) {
        hours = minutes / 60;
        minutes = minutes - hours * 60;
    }

    cout << hours << ":" << minutes << ":" << seconds << endl;
    
    return 0;
}