//
// Created by lucas on 01/18/2021.
//

#include <iostream>

using namespace std;

int main() {
    int t1;
    int t2;
    int t3;
    int t4;

    cin >> t1 >> t2 >> t3 >> t4;

    int devices = (t1 + t2 + t3 + t4) - 3;

    cout << devices << endl;

    return 0;
}
