#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int number, first, second;
	printf("Enter a two-digit number: ");
	scanf("%d", &number);
	first = number / 10;
	second = number % 10;
	printf("The reversal is: %d%d", second, first);
	return 0;
}