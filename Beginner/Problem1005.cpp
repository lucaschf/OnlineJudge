//
// Created by lucas on 01/16/2021.
//

#include <iostream>

using namespace std;

int main() {
	float a;
	float b;

	double weightA = 3.5;
	double weightB = 7.5;

	cin >> a;
	cin >> b;

	printf("MEDIA = %.5f\n", (a * weightA + b * weightB) / (weightB + weightA));

	return 0;
}
