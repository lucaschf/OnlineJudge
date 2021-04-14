//
// Created by lucas on 01/17/2021.
//

#include <iostream>

using namespace std;

int main() {
	int sequence_size;

	cin >> sequence_size;

	int prev = 0;
	int current = 1;
	int next;

	cout << prev << " " << current << " ";
	for (int i = 2; i < sequence_size; i++) {
		next = current + prev;
		prev = current;
		current = next;
		cout << next;

		cout << (i != sequence_size - 1 ? " " : "\n");
	}

	return 0;
}
