//
// Created by lucas on 01/17/2021.
//

#include "Problem1048.h"

int get_percentage(double salary);

void Problem1048::solve() {
    double current_salary;

    cin >> current_salary;

    int percentage = get_percentage(current_salary);
    double adjustment_value = (percentage / 100.0) * current_salary;
    auto updated_salary = current_salary + adjustment_value;

    printf("Novo salario: %1.2f\n", updated_salary);
    printf("Reajuste ganho: %1.2f\n", adjustment_value);
    printf("Em percentual: %d %%\n", percentage);
}

int get_percentage(double salary) {
    if (salary <= 400)
        return 15;

    if (salary <= 800)
        return 12;

    if (salary <= 1200)
        return 10;

    if (salary <= 2000)
        return 7;

    return 4;
}

string Problem1048::getName() {
    return "Salary Increase";
}

int Problem1048::getNumber() {
    return 1048;
}
