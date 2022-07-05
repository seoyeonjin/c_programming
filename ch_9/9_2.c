#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check(int x, int y, int n);

int main(void) {
	
	int x, y, n;
	printf("x, y, n: ");
	scanf("%d%d%d", &x, &y, &n);

	if (check(x, y, n))
		printf("The check function returns 1");
	else {
		printf("The check function returns 0");
	}
	return 0;
}

int check(int x, int y, int n) {
	if (x <= n && x >= 0 && y <= n && y >= 0)
		return 1;
	return 0;
}