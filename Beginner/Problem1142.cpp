//
// Created by lucas on 01/17/2021.
//

#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;
    int current = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", current);
            current++;
        }
        printf("PUM\n");
        current++;
    }

    return 0;
}