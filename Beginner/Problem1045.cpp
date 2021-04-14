//
// Created by lucas on 01/17/2021.
//

#include <iostream>

using namespace std;

template<typename T>
void swap_if_lesser(T &a, T &b) {
    if (a < b) {
        T tmp(a);
        a = b;
        b = tmp;
    }
}

template<typename T>
void sort(T &a, T &b, T &c) {
    swap_if_lesser(a, b);
    swap_if_lesser(a, c);
    swap_if_lesser(b, c);
}

int main() {
    double a;
    double b;
    double c;

    cin >> a;
    cin >> b;
    cin >> c;

    sort(a, b, c);

    auto pow_a = a * a;
    auto pow_b = b * b;
    auto pow_c = c * c;

    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("NAO FORMA TRIANGULO\n");
        return;
    }

    if (pow_a == pow_b + pow_c)
        printf("TRIANGULO RETANGULO\n");
    else if (pow_a > pow_b + pow_c)
        printf("TRIANGULO OBTUSANGULO\n");
    else if (pow_a < pow_b + pow_c)
        printf("TRIANGULO ACUTANGULO\n");

    if (a == b && a == c)
        printf("TRIANGULO EQUILATERO\n");

    if (a == b && a != c || a == c && a != b || b == c && b != a)
        printf("TRIANGULO ISOSCELES\n");

    return 0;
}