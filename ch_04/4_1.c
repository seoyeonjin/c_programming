#include <stdio.h>

int main(void) {
	int i, j, k;
	i = 5; j = 3;
	printf("%d %d", i / j, i % j); // 1, 2
	printf("\n");

	i = 2; j = 3;
	printf("%d", (i + 10) % j); // 0
	printf("\n");

	i = 7; j = 8; k = 9;
	printf("%d", (i + 10) % k / j); // 1
	printf("\n");

	i = 1; j = 2; k = 3;
	printf("%d", (i + 5) % (j + 2) / k); // 0
	printf("\n");
	return 0;
}