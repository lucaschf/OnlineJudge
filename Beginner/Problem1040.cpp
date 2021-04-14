//
// Created by lucas on 01/16/2021.
//

#include <iostream>

using namespace std;

int main() {
	double score1;
	double score2;
	double score3;
	double score4;
	double exam_score;

	const int weigh1 = 2;
	const int weight2 = 3;
	const int weight3 = 4;
	const int weight4 = 1;

	cin >> score1;
	cin >> score2;
	cin >> score3;
	cin >> score4;

	auto average = ((score1 * weigh1) + (score2 * weight2) + (score3 * weight3) + (score4 * weight4)) /
		(weigh1 + weight2 + weight3 + weight4);

	printf("Media: %1.1f\n", average);

	if (average >= 7) {
		printf("Aluno aprovado.\n");
		return;
	}

	if (average < 5) {
		printf("Aluno reprovado.\n");
		return;
	}

	cin >> exam_score;

	printf("Aluno em exame.\n");
	printf("Nota do exame: %1.1f\n", exam_score);

	average = (average + exam_score) / 2;

	if (average < 5) {
		printf("Aluno reprovado.\n");
		return;
	}

	printf("Aluno aprovado.\n");
	printf("Media final: %1.1f\n", average);

	return 0;
}
