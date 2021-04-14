//
// Created by lucas on 01/16/2021.
//

#include <iostream>

using namespace std;

int main() {
	int a;
	int b;
	int c;

	cin >> a;
	cin >> b;
	cin >> c;

	int greatest = (a + b + abs(a - b)) / 2;
	greatest = (greatest + c + abs(greatest - c)) / 2;

	printf("%d eh o maior\n", greatest);

	return 0;
}