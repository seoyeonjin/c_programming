#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int day, start;
	printf("Enter number of days in month: ");
	scanf("%d", &day);
	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &start);

	for (int j = 0; j < start-1; j++) {
		printf("   ");
	}

	for (int i = 1; i <= day; i++) {

		printf("%3d", i);


		if (start == 7) {
			start = 0;
			printf("\n");
		}


		start += 1;

	}

	return 0;
}