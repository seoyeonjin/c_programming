#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void pay_amount(int dollars, int* tewnties, int* tens, int* fives, int* ones);

int main(void) {
	int amount;
	printf("Enter a dollar amount: ");
	scanf("%d", &amount);


	int count_20, count_10, count_5, count_1;

	pay_amount(amount, &count_20, &count_10, &count_5, &count_1);

	printf("$20 bills: %d\n", count_20);
	printf("$10 bills: %d\n", count_10);
	printf(" $5 bills: %d\n", count_5);
	printf(" $1 bills: %d\n", count_1);

	return 0;
}

void pay_amount(int dollars, int* tewnties, int* tens, int* fives, int* ones) {

	*tewnties = dollars / 20;
	*tens = dollars % 20 / 10;
	*fives = dollars % 10 / 5;
	*ones = dollars % 5;

}