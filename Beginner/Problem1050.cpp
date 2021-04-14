//
// Created by lucas on 01/17/2021.
//

#include <map>
#include <iostream>

using namespace std;

int main() {
    map<int, string> destinations = {
            {61, "Brasilia"},
            {71, "Salvador"},
            {11, "Sao Paulo"},
            {21, "Rio de Janeiro"},
            {32, "Juiz de Fora"},
            {19, "Campinas"},
            {27, "Vitoria"},
            {31, "Belo Horizonte"}
    };

    int ddd;
    cin >> ddd;

    auto destination = destinations.find(ddd);

    if (destination == destinations.end())
        cout << "DDD nao cadastrado" << endl;
    else
        cout << destination->second << endl;

    return 0;
}