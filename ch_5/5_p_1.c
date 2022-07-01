#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	printf("The number %d has ", num);

	if (0 < num && num < 10)
		printf("1");
	else if (9 < num && num < 100)
		printf("2");
	else if (99 < num && num < 1000)
		printf("3");
	else
		printf("4");
	printf(" digits");

	return 0;
}