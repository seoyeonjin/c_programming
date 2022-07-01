#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	

int main(void) {
	float income;

	printf("Enter the income: ");
	scanf("%f", &income);

	printf("Amount of tax: ");
	if (income < 750)
		printf("$%f", 0.01 * income);
	else if (income <= 2250)
		printf("$%f", 7.50f + 0.02 * (income - 750));
	else if (income <= 3750)
		printf("$%f", 37.50f + 0.03 * (income - 2250));
	else if (income <= 5250)
		printf("$%f", 82.50f + 0.04 * (income - 3750));
	else if (income <= 7000)
		printf("$%f", 142.50f + 0.05 * (income - 5250));
	else
		printf("$%f", 230.00f + 0.06 * (income - 7000));

	return 0;
}