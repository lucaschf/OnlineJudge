//
// Created by lucas on 01/25/2021.
//

#include <iostream>

using namespace std;

int main() {
	const int baseYear = 2015;
	int lines;
	int year;
	int result;

	cin >> lines;

	for (int i = 0; i < lines; i++) {
		cin >> year;

		if (baseYear == year)
			result = 1;
		else
			result = baseYear < year ? abs(baseYear - 1 - year) : baseYear - year;

		cout << result << (baseYear <= year ? " A.C." : " D.C.") << endl;
	}

	return 0;
}
