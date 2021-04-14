//
// Created by lucas on 01/18/2021.
//

#include <iomanip>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
	int size;

	while ((cin >> size) && size != 0) {
		int arr[size][size];

		for (int i = 0; i < size; i++) {
			int value = pow(2, i);

			for (int j = 0; j < size; j++) {
				arr[i][j] = value;
				value *= 2;
			}
		}

		int digits = count_digits(arr[size - 1][size - 1]);
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				cout << setw(j == 0 ? digits : digits + 1) << arr[i][j];
			}

			cout << endl;
		}

		cout << endl;
	}

	return 0;
}