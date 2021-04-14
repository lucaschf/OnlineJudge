//
// Created by lucas on 01/17/2021.
//

#include <iostream>
#include <string>

using namespace std;

string quadrant(double x, double y) {
	if (x == 0 && y == 0) {
		return "Origem";
	}

	if (x == 0) {
		return "Eixo Y";
	}

	if (y == 0) {
		return "Eixo X";
	}

	if (x > 0 && y < 0) {
		return "Q4";
	}

	if (x > 0 && y > 0) {
		return "Q1";
	}

	if (x < 0 && y < 0) {
		return "Q3";
	}

	return "Q2";
}

int main() {
	double x;
	double y;

	cin >> x;
	cin >> y;

	cout << quadrant(x, y) << endl;

	return 0;
}
