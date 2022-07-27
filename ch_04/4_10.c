#include <stdio.h>

int main(void) {

	int i, j;
	//(a)
	i = 6;
	j = i += i;
	printf("%d %d", i, j); //12, 12
	printf("\n");

	//(b)
	i = 5;
	j = (i -= 2) + 1;
	printf("%d %d", i, j); //3, 4
	printf("\n");

	//(c)
	i = 7;
	j = 6 + (i = 2.5);
	printf("%d %d", i, j); //2, 8
	printf("\n");

	//(d)
	i = 2; j = 8;
	j = (i = 6) + (j = 3);
	printf("%d %d", i, j); //6, 9
	printf("\n");

	return 0;
}