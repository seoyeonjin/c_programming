#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int calc(int x);

int main(void) {
	
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	int result = calc(num);
	printf("Result: %d", result);
	return 0; 
}

int calc(int x) {
	return 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - 1 * x * x + 7 * x - 6;
}