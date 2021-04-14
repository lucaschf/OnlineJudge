//
// Created by lucas on 01/17/2021.
//


#include <iostream>

using namespace std;

int main() {
	double salary;
	double taxes;

	cin >> salary;

	if (salary <= 2000) {
		cout << "Isento" << endl;
		return;
	}

	if (salary > 2000 && salary <= 3000)
		taxes = (salary - 2000) * 0.08;
	else if (salary > 3000 && salary < 4500)
		taxes = (salary - 3000) * 0.18 + (1000 * 0.08);
	else
		taxes = (salary - 4500) * 0.28 + (1500) * 0.18 + 1000 * 0.08;

	printf("R$ %1.2f\n", taxes);

	return 0;
}
