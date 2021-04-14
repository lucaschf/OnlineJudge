//
// Created by lucas on 01/17/2021.
//

#include <iostream>

using namespace std;

string quadrant(int x, int y);

int main() {
	int x;
	int y;

	while (true) {
		cin >> x;
		cin >> y;

		if (x == 0 || y == 0)
			break;

		cout << quadrant(x, y) << endl;
	}

	return 0;
}

string quadrant(int x, int y) {
	if (x > 0) {
		return (y > 0 ? "primeiro" : "quarto");
	}

	return (y > 0 ? "segundo" : "terceiro");
}
