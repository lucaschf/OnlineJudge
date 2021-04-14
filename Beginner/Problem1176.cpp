//
// Created by lucas on 01/17/2021.
//

#include <iostream>

using namespace std;

int main() {
	long int count = 0;
	long int requested_position;
	long long int fibonacci[60];

	fibonacci[0] = 0;
	fibonacci[1] = 1;

	for (long int i = 2; i <= 60; i++) {
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
	}

	cin >> count;

	for (long int i = 0; i < count; i++) {
		cin >> requested_position;
		printf("Fib(%ld) = %lld\n", requested_position, fibonacci[requested_position]);
	}

	return 0;
}
