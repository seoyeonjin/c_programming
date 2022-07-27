#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num, rem;
	printf("Enter a number: ");
	scanf("%d", &num);

	printf("The reversal is: ");
	while (num != 0) {
		rem = num % 10;
		num = num / 10;
		printf("%d", rem);
	}
	return 0;
}