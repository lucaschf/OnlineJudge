//
// Created by lucas on 01/16/2021.
//


#include <iostream>

using namespace std;

int main() {
    int workerNumber;
    int workedHours;
    float hourValue;

    cin >> workerNumber;
    cin >> workedHours;
    cin >> hourValue;

    printf("NUMBER = %d\nSALARY = U$ %1.2f\n", workerNumber, hourValue * workedHours);
 
    return 0;
}
