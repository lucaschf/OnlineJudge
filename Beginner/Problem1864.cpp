//
// Created by lucas on 01/18/2021.
//

#include <iostream>

using namespace std;

int main() {
	string quote = "LIFE IS NOT A PROBLEM TO BE SOLVED, BUT A REALITY TO BE EXPERIENCED.";

	int number;
	cin >> number;

	for (int i = 0; i < number; i++) {
		cout << quote[i];
	}

	cout << endl;

	return 0;
}
