//
// Created by lucas on 01/18/2021.
//

#include <iostream>

using namespace std;

int main() {
	int count;
	int fastest;
	int slug;

	while (cin >> count && !cin.eof()) {
		fastest = 0;

		for (int i = 0; i < count; i++) {
			cin >> slug;
			if (slug > fastest)
				fastest = slug;
		}

		if (fastest >= 20) {
			cout << 3 << endl;
			continue;
		}

		cout << (fastest < 10 ? 1 : 2) << endl;
	}

	return 0;
}