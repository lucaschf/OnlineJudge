//
// Created by lucas on 01/17/2021.
//

#include <iostream>

using namespace std;

int main() {
    int n;
    double a;
    double b;
    double c;
    double average;

    int weight_a = 2;
    int weight_b = 3;
    int weight_c = 5;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a;
        cin >> b;
        cin >> c;

        average = ((a * weight_a) + (b * weight_b) + (c * weight_c)) / (weight_a + weight_b + weight_c);
        printf("%.1f\n", average);
    }

    return 0;
}