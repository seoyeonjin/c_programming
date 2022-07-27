#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num;

	//(a) 73
	scanf("%o", &num);
	printf("%d\n", num);

	//(b) 119
	scanf("%x", &num);
	printf("%d\n", num);

	//(c) 2748
	scanf("%x", &num);
	printf("%d\n", num);

	return 0;
}