//
// Created by lucas on 01/16/2021.
//

#include <iostream>

using namespace std;

int main() {
    const int days_in_year = 365;
    const int days_in_month = 30;

    int days;

    cin >> days;

    auto years = days / days_in_year;
    days -= years * days_in_year;

    auto months = days / days_in_month;
    days -= months * days_in_month;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, months, days);
    
    return 0;
}
