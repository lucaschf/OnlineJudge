//
// Created by lucas on 01/16/2021.
//

#include <iostream>

using namespace std;

int main{
    const double percentage_over_sales = 15;

    string name;
    double salary;
    double total_sales;

    cin >> name;
    cin >> salary;
    cin >> total_sales;

    auto commission = total_sales * (percentage_over_sales / 100);
    double amount_to_receive = salary + commission;

    printf("TOTAL = R$ %1.2f\n", amount_to_receive);
    
    return 0;
}
