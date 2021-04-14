//
// Created by lucas on 01/16/2021.
//

#include <map>
#include <iostream>

using namespace std;

int main() {
	int code;
	int quantity;

	cin >> code;
	cin >> quantity;

	map<int, double> products = {
			{1, 4},
			{2, 4.5},
			{3, 5},
			{4, 2},
			{5, 1.5},
	};

	printf("Total: R$ %1.2f\n", products.find(code)->second * quantity);

	return 0;
}