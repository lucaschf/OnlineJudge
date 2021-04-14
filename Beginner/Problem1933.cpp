//
// Created by lucas on 01/18/2021.
//

#include <iostream>

using namespace std;

int main() {
	int card1;
	int card2;

	cin >> card1 >> card2;

	cout << (card1 == card2 || card1 > card2 ? card1 : card2) << endl;

	return 0;

}
