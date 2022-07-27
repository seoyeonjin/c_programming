#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int num_digits(int n);

int main(void) {
	int n, count; 
	printf("Enter the number: ");
	scanf("%d", &n);
	count = num_digits(n);
	printf("%dÀÚ¸®", count);
	return 0;
}

int num_digits(int n) {
	int num = 0;
	while (n > 0) {
		n /= 10;
		num++;
	}
	return num;
}