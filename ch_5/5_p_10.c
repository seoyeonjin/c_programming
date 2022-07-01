#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num, a, b;

	printf("Enter numerical grade: ");
	scanf("%d", &num);

	if (num > 100 || num < 0) {
		printf("Error: 잘못된 범위");
		return 0;
	}

	a = num / 10;
	b = num % 10;

	printf("Letter grade: ");
	switch (a) {
	case 10:
	case 9:
		printf("A");
		break;
	case 8:
		printf("B");
		break;
	case 7:
		printf("C");
		break;
	case 6:
		printf("D");
		break;
	default:
		printf("F");
		break;
	}


	return 0;
}