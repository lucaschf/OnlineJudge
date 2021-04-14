//
// Created by lucas on 01/18/2021.
//

#include <iomanip>
#include <iostream>

using namespace std;

int main() {
	const int size = 12;
	double arr[size][size];
	char operation;
	double result = 0;
	int count = 0;

	cin >> operation;

	for (auto& i : arr) {
		for (auto& j : i) {
			cin >> j;
		}
	}

	for (int i = 0; i < size / 2; i++) {
		for (int j = size - i; j < size; j++) {
			result += arr[i][j];
			count++;
		}
	}

	for (int i = size / 2; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			result += arr[i][j];
			count++;
		}
	}

	if (operation == 'M') {
		result /= count;
	}

	cout << fixed << setprecision(1) << result << endl;

	return 0;
}
