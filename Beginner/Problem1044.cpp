//
// Created by lucas on 01/17/2021.
//

#include <iostream>

using namespace std;

int main() {
    int a;
    int b;

    cin >> a;
    cin >> b;

    printf("%s\n", a % b == 0 || b % a == 0 ? "Sao Multiplos" : "Nao sao Multiplos");
    
    return 0;
}
