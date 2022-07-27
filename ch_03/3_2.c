#include <stdio.h>

int main(void) {
	float x = 12.123;
	printf("%-8.1e", x);
	printf("\n");
	printf("%10.6e", x);
	printf("\n");
	printf("%-8.3f", x);
	printf("\n");
	printf("%6.0f", x);

	return 0;
}