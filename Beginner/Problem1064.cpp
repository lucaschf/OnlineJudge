//
// Created by lucas on 01/17/2021.
//


#include <iostream>

using namespace std;

int main() {
	const int count = 6;
	int positives = 0;

	double value;
	double sum = 0;
	double average = 0;

	for (int i = 1; i <= count; i++) {
		cin >> value;

		if (value > 0) {
			positives++;
			sum += value;
		}
	}

	if (sum > 0)
		average = sum / positives;

	printf("%d valores positivos\n%1.1f\n", positives, average);

	return 0;
}
