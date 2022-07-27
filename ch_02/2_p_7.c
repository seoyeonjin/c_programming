#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int amount;
	printf("Enter a dollar amount: ");
	scanf("%d", &amount);

	int count_20, count_10, count_5, count_1 = 0;

	count_20 = amount / 20;
	count_10 = amount % 20 / 10;
	count_5 = amount % 10 / 5;
	count_1 = amount % 5;

	printf("$20 bills: %d\n", count_20);
	printf("$10 bills: %d\n", count_10);
	printf(" $5 bills: %d\n", count_5);
	printf(" $1 bills: %d\n", count_1);

	return 0;
}