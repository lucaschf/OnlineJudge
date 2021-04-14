//
// Created by lucas on 01/18/2021.
//

#include <iostream>

using namespace std;

int main() {
	int persons;
	string name;
	int force;

	cin >> persons;

	for (int i = 0; i < persons; i++) {
		cin >> name;
		cin >> force;

		cout << (name == "Thor" ? "Y" : "N") << endl;
	}

	return 0;
}

