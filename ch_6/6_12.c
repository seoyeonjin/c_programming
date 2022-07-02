#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int d, n;
	int flag = 1;
	scanf("%d", &n);

	for (d = 2; d * d < n; d++)
		if (n % d == 0) {
			flag = 0;
			break;
		}

	if (flag == 1) {
		printf("Prime");
	}
	else {
		printf("Not prime");
	}
	return 0;
}