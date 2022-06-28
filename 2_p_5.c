#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	float x;
	scanf("%f", &x);
	float result = 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6;
	printf("%.1f", result);
	return 0;
}