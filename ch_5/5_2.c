#include <stdio.h>

int main(void) {
	int i, j, k;
	
	//(a)
	i = 10; j = 5;
	printf("%d", !i < j); // 1
	printf("\n");

	//(b)
	i = 2; j = 1;
	printf("%d", !!i + !j); //1
	printf("\n");

	//(c)
	i = 5; j = 0; k = -5;
	printf("%d", i && j || k); //1
	printf("\n");

	//(d)
	i = 1; j = 2; k = 3;
	printf("%d", i < j || k); //1
	printf("\n");


	return 0;
}