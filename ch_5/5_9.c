#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int score;
	scanf("%d", &score);

	if (score >= 90)
		printf("A");
	else if (score >= 80)
		printf("B");
	else if (score >= 70)
		printf("C");
	else if (score >= 60)
		printf("D");
	else
		printf("F");

	if (score < 60)
		printf("F");
	else if (score < 70)
		printf("D");
	else if (score < 80)
		printf("C");
	else if (score < 90)
		printf("B");
	else
		printf("A");

	//동일한 결과
	return 0;
}