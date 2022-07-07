#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void reduce(int numerator, int denominator, int* reduced_numerator, int* reduced_denominator);

int main(void) {
	int a, b, c, d;
	printf("Enter a fraction: ");
	scanf("%d/%d", &a, &b);

	reduce(a, b, &c, &d);

	printf("In lowest terms: %d/%d", c, d);

	return 0;
}

void reduce(int numerator, int denominator, int* reduced_numerator, int* reduced_denominator) {

	*reduced_numerator = numerator;
	*reduced_denominator = denominator;

	while (denominator != 0) {
		denominator = numerator % denominator;
	}
	*reduced_numerator = *reduced_numerator / numerator;
	*reduced_denominator = *reduced_denominator / numerator;
}