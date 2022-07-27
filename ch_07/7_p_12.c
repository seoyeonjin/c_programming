#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	printf("Enter an expression: ");
	char op;
	float a, b;
	scanf("%f", &a);

	while ((op = getchar()) != '\n') {
		scanf("%f", &b);
		if (op == '+')
			a = a + b;
		else if (op == '-')
			a = a - b;
		else if (op == '*')
			a = a * b;
		else if (op == '/')
			a = a / b;
	}

	printf("Value of expression: %f", a);
	return 0;
}