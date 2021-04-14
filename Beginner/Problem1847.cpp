//
// Created by lucas on 01/18/2021.
//

#include <iostream>

using namespace std;

int main() {
    int first_day;
    int second_day;
    int third_day;

    int first_change;

    enum feeling {
        sad, happy
    };

    feeling current_feeling = happy;

    cin >> first_day;
    cin >> second_day;
    cin >> third_day;

    first_change = abs(second_day - first_day);

    if (first_day == second_day)
        current_feeling = second_day < third_day ? happy : sad;
    else if (second_day > first_day) {
        if (second_day >= third_day)
            current_feeling = sad;
        else {
            current_feeling = first_change > third_day - second_day ? sad : happy;
        }

    } else if (first_day > second_day) {
        if (second_day <= third_day)
            current_feeling = happy;
        else {
            current_feeling = second_day - third_day < first_change ? happy : sad;
        }
    }

    cout << (current_feeling == sad ? ":(" : ":)") << endl; 
    
    return 0;
}
