//
// Created by lucas on 01/17/2021.
//

#include <iomanip>
#include <iostream>

using namespace std;

int main() {
	const int size = 100;
	double arr[size];

	for (double& i : arr) {
		cin >> i;
	}

	for (int i = 0; i < size; i++) {
		if (arr[i] <= 10)
			cout << fixed << setprecision(1) << "A[" << i << "] = " << arr[i] << endl;
	}

	return 0;
}
