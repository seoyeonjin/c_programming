#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b, temp;
	printf("Enter two integers: ");
	scanf("%d %d", &a, &b);

	while (b != 0) {
		temp = b;
		b = a % b;
		a = temp;
	}
	
	printf("Greatest common divisor: %d", a);

	return 0;
}