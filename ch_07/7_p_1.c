#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	/*
	short i;
	int n;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		printf("%10hu%10d\n", i, i * i);
		*/

	long i;
	int n;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		printf("%10ld%10d\n", i, i * i);


	return 0;
}