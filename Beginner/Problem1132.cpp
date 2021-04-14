//
// Created by lucas on 01/17/2021.
//

#include <iostream>

using namespace std;

int main() {
	int x;
	int y;

	cin >> x;
	cin >> y;

	if (x > y) {
		int aux = x;

		x = y;
		y = aux;
	}

	int sum = 0;
	for (; x <= y; x++) {
		if (x % 13 != 0)
			sum += x;
	}

	cout << sum << endl;

	return 0;
}
