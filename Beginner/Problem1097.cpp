//
// Created by lucas on 01/17/2021.
//

#include <iostream>

using namespace std;

int main() {
	for (int i = 1; i < 10; i += 2) {
		for (int j = 6 + i; j > 6 + i - 3; j--)
			cout << "I=" << i << " J=" << j << endl;
	}

	return 0;
}
