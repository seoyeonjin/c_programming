#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i, j;
	
	scanf("%d%d", &i, &j);

	if (i < j) {
		printf("-1\n");
	}
	else if (i == j) {
		printf("0\n");
	}
	else {
		printf("1\n");
	}

	printf("%d\n", (i > j) - (i < j));
	return 0;
}