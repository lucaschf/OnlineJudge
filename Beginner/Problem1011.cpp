//
// Created by lucas on 01/16/2021.
//

#include <cmath>
#include <iostream>

using namespace std;

int main() {
    const double pi = 3.14159;
    double radius;

    cin >> radius;

    auto volume = (4.0 / 3.0) * pi * pow(radius, 3);
    printf("VOLUME = %1.3f\n", volume);
    
    return 0;
}
