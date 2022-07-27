#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int number, first, second, third;
	printf("Enter a two-digit number: ");
	scanf("%d", &number);
	first = number / 100;
	second = number % 100 / 10;
	third = number % 10;
	printf("The reversal is: %d%d%d", third, second, first);
	return 0;
}