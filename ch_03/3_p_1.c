#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int m, d, y;
	printf("Enter a date (mm/dd/yyyy) : ");
	scanf("%d/%d/%d", &m, &d, &y);
	printf("You entered the date %2.2d%2.2d%d", y, m, d);

	return 0;
}