#include <stdio.h>

int main(void) {
	int i, j, k;
	//(a)
	i = 7; j = 8; 
	i *= j + 1;
	printf("%d %d", i, j); //63, 8
	printf("\n");

	//(b)
	i = j = k = 1;
	i += j += k;
	printf("%d %d %d", i, j, k); //3, 2, 1 
	printf("\n");

	//(c)
	i = 1; j = 2; k = 3;
	i -= j -= k;
	printf("%d %d %d", i, j, k); //2, -1, 3
	printf("\n");

	//(d)
	i = 2; j = 1; k = 0; 
	i *= j *= k;
	printf("%d %d %d", i, j, k); //0, 0, 0
	printf("\n");

	return 0;
}