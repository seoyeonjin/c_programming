#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	float x;
	scanf("%f", &x);
	float result = ((((3 * x + 2)* x- 5)* x - 1)* x + 7) * x - 6;
	printf("%.1f", result);
	return 0;
}