//
// Created by lucas on 01/17/2021.
//

#include "Problem1047.h"

void Problem1047::solve() {
    int start_hour;
    int start_minutes;
    int end_hour;
    int end_minutes;

    cin >> start_hour;
    cin >> start_minutes;
    cin >> end_hour;
    cin >> end_minutes;

    int hours;
    int minutes;

    if (start_hour >= end_hour)
        hours = (24 + end_hour) - start_hour;
    else
        hours = end_hour - start_hour;

    minutes = end_minutes - start_minutes;

    if (minutes < 0) {
        hours--;

        minutes += 60;
    }

    if (minutes > 0 && hours == 24)
        hours = 0;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hours, minutes);
}

string Problem1047::getName() {
    return "Game Time with Minutes";
}

int Problem1047::getNumber() {
    return 1047;
}
