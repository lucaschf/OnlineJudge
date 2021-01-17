//
// Created by lucas on 01/17/2021.
//

#include "Problem1050.h"
#include <map>

void Problem1050::solve() {
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
}

string Problem1050::getName() {
    return "DDD";
}
