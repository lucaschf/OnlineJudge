//
// Created by lucas on 01/18/2021.
//

#include <iostream>

using namespace std;

bool make_triangle(int a, int b, int c);

int main() {
    int rod1;
    int rod2;
    int rod3;
    int rod4;

    cin >> rod1;
    cin >> rod2;
    cin >> rod3;
    cin >> rod4;

    if (make_triangle(rod1, rod2, rod3) ||
        make_triangle(rod1, rod3, rod4) || make_triangle(rod1, rod2, rod4) || make_triangle(rod2, rod3, rod4))
        cout << "S" << endl;
    else
        cout << "N" << endl;

    return 0;
}
