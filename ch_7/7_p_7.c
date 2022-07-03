#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num1, denom1, num2, denom2, result_num, result_denom;
	char oper;

	printf("Enter two fractions separated by a plus sign: ");
	scanf("%d/%d%c%d/%d", &num1, &denom1,&oper, &num2, &denom2);
	
	
	if (oper == '+') {
		result_num = num1 * denom2 + num2 * denom1;
		result_denom = denom1 * denom2;
		printf("The sum is %d/%d", result_num, result_denom);
	}
	else if (oper == '-') {
		result_num = num1 * denom2 - num2 * denom1;
		result_denom = denom1 * denom2;
		printf("The sum is %d/%d", result_num, result_denom);
	}
	else if (oper == '*') {
		result_num = num1 * num2;
		result_denom = denom1 * denom2;
		printf("The sum is %d/%d", result_num, result_denom);

	}
	else if (oper == '/') {
		result_num = num1 * denom2;
		result_denom = denom1 * num2;
		printf("The sum is %d/%d", result_num, result_denom);
	}

	return 0;
}