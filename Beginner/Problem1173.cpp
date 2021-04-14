//
// Created by lucas on 01/17/2021.
//

#include <iostream>

using namespace std;

int main() {
	const int size = 10;
	int n;
	int arr[size];

	cin >> n;

	arr[0] = n;
	for (int i = 1; i < size; i++) {
		arr[i] = arr[i - 1] * 2;
	}

	for (int i = 0; i < size; i++) {
		cout << "N[" << i << "] = " << arr[i] << endl;
	}

	return 0;
}