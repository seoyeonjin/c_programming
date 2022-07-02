#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b, temp, c, d;
	printf("Enter a fraction: ");
	scanf("%d/%d", &a, &b);
	c = a;
	d = b;

	while (b != 0) {
		temp = a;
		b = a % b;
		a = temp;
	}
	c = c / a;
	d = d / a;

	printf("In lowest terms: %d/%d", c, d);

	return 0;
}