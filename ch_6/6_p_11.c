#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	float sum = 1;
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++) {
		int mul = 1;
		for (int j = 1; j <= i; j++) {
			mul = mul * j;
		}
		sum = sum + 1.0f / mul;
	}
	printf("Sum: %f", sum);
	return 0;
}