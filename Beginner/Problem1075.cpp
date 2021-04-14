//
// Created by lucas on 01/17/2021.
//

#include <iostream>

using namespace std;

int main() {
	int n;
	const int last = 10000;

	cin >> n;

	for (int i = 1; i <= last; i++) {
		if (i % n == 2)
			cout << i << endl;
	}
}
