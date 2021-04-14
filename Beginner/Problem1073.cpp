//
// Created by lucas on 01/17/2021.
//

#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
	int n;

	cin >> n;

	for (int i = 2; i <= n; i += 2) {
		cout << std::fixed << setprecision(0) << i << "^" << 2 << " = " << pow(i, 2) << endl;
	}

	return 0;
}
