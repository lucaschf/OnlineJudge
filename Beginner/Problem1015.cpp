//
// Created by lucas on 01/16/2021.
//

#include <cmath>
#include <iostream>

using namespace std;

int main() {
	double x1;
	double y1;

	double x2;
	double y2;

	cin >> x1;
	cin >> y1;

	cin >> x2;
	cin >> y2;

	auto x = pow((x2 - x1), 2);
	auto y = pow((y2 - y1), 2);

	auto distance = sqrt(x + y);

	printf("%1.4f\n", distance);

	return 0;
}