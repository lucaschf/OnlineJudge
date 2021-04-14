//
// Created by lucas on 01/17/2021.
//

#include <iostream>

using namespace std;

int main() {
	const int size = 20;
	int x[size];

	for (int& i : x) {
		cin >> i;
	}

	for (int i = 0; i < size / 2; i++) {
		auto aux = x[i];
		auto pos = (size - 1) - i;

		x[i] = x[pos];
		x[pos] = aux;
	}

	for (int i = 0; i < size; i++) {
		cout << "N[" << i << "] = " << x[i] << endl;
	}

	return 0;
}
