#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int number, first, second, third;
	printf("Enter a two-digit number: ");
	scanf("%1d%1d%1d", &first, &second, &third);
	printf("The reversal is: %d%d%d", third, second, first);
	return 0;
}