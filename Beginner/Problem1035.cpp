//
// Created by lucas on 01/16/2021.
//

#include <iostream>

using namespace std;

bool isAccepted(int a, int b, int c, int d) {
	if (b <= c || d <= a)
		return false;

	if (c + d <= a + b)
		return false;

	if (c < 0 || d < 0)
		return false;

	return a % 2 == 0;
}

int main() {
	int a;
	int b;
	int c;
	int d;

	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;

	cout << "Valores " << (!isAccepted(a, b, c, d) ? "nao " : "") << "aceitos" << endl;

	return 0;
}