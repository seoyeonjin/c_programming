#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	

float tax_due(float income);

int main(void) {
	float income;

	printf("Enter the income: ");
	scanf("%f", &income);

	float tax = tax_due(income);
	printf("Amount of tax: %f", tax);
	return 0;
}

float tax_due(float income) {
	float tax;
	if (income < 750)
		tax = 0.01 * income;
	else if (income <= 2250)
		tax = 7.50f + 0.02 * (income - 750);
	else if (income <= 3750)
		tax = 37.50f + 0.03 * (income - 2250);
	else if (income <= 5250)
		tax = 82.50f + 0.04 * (income - 3750);
	else if (income <= 7000)
		tax = 142.50f + 0.05 * (income - 5250);
	else
		tax = 230.00f + 0.06 * (income - 7000);

	return tax;
}