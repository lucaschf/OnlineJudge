//
// Created by lucas on 01/26/2021.
//

#include <iomanip>
#include <iostream>

using namespace std;

int main() {
	double startingValue;
	double endValue;

	cin >> startingValue >> endValue;

	double sizeIncrease = endValue - startingValue;
	double percentageIncrease = (sizeIncrease / startingValue) * 100.0;

	cout << fixed << setprecision(2) << percentageIncrease << "%" << endl;

	return 0;
}