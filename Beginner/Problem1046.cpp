//
// Created by lucas on 01/17/2021.
//

#include "Problem1046.h"

void Problem1046::solve() {
    int start_time;
    int end_time;

    cin >> start_time;
    cin >> end_time;

    int time;

    if (start_time >= end_time)
        time = (24 + end_time) - start_time;
    else
        time = end_time - start_time;

    printf("O JOGO DUROU %d HORA(S)\n", time);
}

string Problem1046::getName() {
    return "Game Time";
}

int Problem1046::getNumber() {
    return 1046;
}
