#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num, a, b, c, d, e;
	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &num);

	a = num / 4096;
	b = num % 4096 / 512;
	c = num % 512 / 64;
	d = num % 64 / 8;
	e = num % 8;

	printf("In octal, your number is: %d%d%d%d%d", a, b, c, d, e);

	return 0;
}