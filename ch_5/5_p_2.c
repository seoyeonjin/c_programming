#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int hour, min;
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &min);

	printf("Equivalent 12-hour time: ");
	if (hour > 12)
		printf("%d:%.2d", hour - 12, min);
	else
		printf("%d:%.2d", hour, min);
	
	if (hour >= 12 && hour != 24)
		printf(" PM");
	else
		printf(" AM");
	return 0;
}