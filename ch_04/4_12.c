#include <stdio.h>

int main(void) {
	int i, j;

	//(a)
	i = 5;
	j = ++i * 3 - 2;
	printf("%d %d", i, j); //6 16
	printf("\n");

	//(b)
	i = 5;
	j = 3 - 2 * i++;
	printf("%d %d", i, j); //6, -7
	printf("\n");

	//(c)
	i = 7;
	j = 3 * i-- + 2;
	printf("%d %d", i, j); //6 23
	printf("\n");

	//(d)
	i = 7;
	j = 3 + --i * 2;
	printf("%d %d", i, j); //6 15
	printf("\n");

	return 0;
}