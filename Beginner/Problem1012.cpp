//
// Created by lucas on 01/16/2021.
//

#include "Problem1012.h"

void Problem1012::solve() {
    const double pi = 3.14159;

    double a;
    double b;
    double c;

    cin >> a;
    cin >> b;
    cin >> c;

    printf("TRIANGULO: %1.3f\n", (a * c) / 2);
    printf("CIRCULO: %1.3f\n", pi * (c * c));
    printf("TRAPEZIO: %1.3f\n", c * ((a + b) / 2));
    printf("QUADRADO: %1.3f\n", b * b);
    printf("RETANGULO: %1.3f\n", a * b);
}

string Problem1012::getName() {
    return "Area";
}

int Problem1012::getNumber() {
    return 1012;
}
