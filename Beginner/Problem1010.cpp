//
// Created by lucas on 01/16/2021.
//

#include <iostream>

using namespace std;

int main() {
	const int read = 2;

	int ids[read];
	int quantity[read];
	double price[read];

	for (int i = 0; i < 2; i++) {
		cin >> ids[i];
		cin >> quantity[i];
		cin >> price[i];
	}

	double amount_to_be_paid = 0;

	for (int i = 0; i < 2; i++) {
		amount_to_be_paid += quantity[i] * price[i];
	}

	printf("VALOR A PAGAR: R$ %1.2f\n", amount_to_be_paid);

	return 0;
}