//
// Created by lucas on 01/17/2021.
//

#include <iostream>

using namespace std;

int main() {
	int i = 1;
	int j = 60;

	for (; j >= 0; j -= 5, i += 3) {
		cout << "I=" << i << " J=" << j << endl;
	}

	return 0;
}
