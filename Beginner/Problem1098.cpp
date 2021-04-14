//
// Created by lucas on 01/17/2021.
//

#include <iostream>

using namespace std;

int main() {
	double i = 0;

	while (i <= 2) {
		for (int j = 1; j <= 3; j++)
			cout << "I=" << i << " J=" << j + i << endl;
		i += .2;
	}

	return 0;
}