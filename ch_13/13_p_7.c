#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b, num;
	char* p1[] = {
		"ten", "twenty", "thirty", "forty", "fifty", "sixty",
		"seventy", "eighty","ninety" };
	char* p2[] = {
		"eleven", "twelve", "thirteen", "fourteen", "fifteen",
		"sixteen", "seventeen", "eighteen", "nineteen" };
	char* p3[] = {
		"twenty", "thirty", "forty", "fifty", "sixty",
		"seventy", "eighty", "ninety"
	};
	char* p4[] = {
		"one", "two", "three", "four","five","six", "seven","eight",
		"nine"
	};

	printf("Enter a two-digit number: ");
	scanf("%1d%1d", &a, &b);

	printf("You entered the number ");

	num = a * 10 + b;

	if (b == 0) {
		printf("%s", p1[a-1]);
		return 0;
	}
	if (a == 1)
		printf("%s", p2[b - 1]);
	else {
		printf("%s", p3[a - 2]);
		printf("-");
		printf("%s", p4[b - 1]);
	}

	return 0;
}