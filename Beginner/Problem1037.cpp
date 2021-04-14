//
// Created by lucas on 01/16/2021.
//

#include <iostream>

using namespace std;

int main() {
	double value;

	cin >> value;

	if (value < 0 || value > 100) {
		cout << "Fora de intervalo" << endl;
		return;
	}

	cout << "Intervalo ";

	if (value <= 25) {
		cout << "[0,25]" << endl;
		return;
	}

	if (value <= 50) {
		cout << "(25,50]" << endl;
		return;
	}

	if (value <= 75) {
		cout << "(50,75]" << endl;
		return;
	}

	cout << "(75,100]" << endl;

	return 0;
}
