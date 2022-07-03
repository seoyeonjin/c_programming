#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i;
	int n;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);
	getchar(); //기본 실행 막음

	for (i = 1; i <= n; i++) {
		printf("%10d%10d\n", i, i * i);
		if (i % 24 == 0) {
			printf("Press Enter to continue...");
			while (getchar() != '\n');
		}
	}
		

	return 0;
}