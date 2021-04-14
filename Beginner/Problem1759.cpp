//
// Created by lucas on 01/18/2021.
//

#include <iostream>

using namespace std;

int main() {
	int count;

	cin >> count;

	for (int i = 1; i <= count; i++) {
		cout << "Ho";
		cout << (i < count ? " " : "!");
	}

	cout << endl;

	return 0;
}