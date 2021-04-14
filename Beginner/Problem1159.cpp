//
// Created by lucas on 01/17/2021.
//

#include <iostream>

using namespace std;

int main() {
	int x;

	cin >> x;

	while (x != 0) {
		int sum = 0;
		int added = 0;

		while (added < 5) {
			if (x % 2 == 0) {
				added++;
				sum += x;
			}

			x += 1;
		}

		cout << sum << endl;
		cin >> x;
	}

	return 0;
}
