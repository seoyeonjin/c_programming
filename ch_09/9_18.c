#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>	

int gcd(int a, int b);

int main(void) {
	int a, b;
	printf("Enter two integers: ");
	scanf("%d %d", &a, &b);

	a = gcd(a, b);

	printf("Greatest common divisor: %d", a);

	return 0;
}

int gcd(int a, int b) {
	int temp;
	if (b == 0)
		return a;
	else {
		temp = b;
		b = a % b;
		a = temp;
		return gcd(a, b);
	}
}