#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int digit(int n, int k);

int main(void) {
	int n, k;
	printf("Enter n, k: ");
	scanf("%d%d", &n, &k);
	int result = digit(n, k);
	printf("Result: %d", result);
	return 0;
}

int digit(int n, int k) {
	int count = 0, num = n;
	while (n > 0) {
		num = n % 10; //뒤에서부터 자리
		count++;
		if (k == count)
			break;
		n /= 10;
	}
	if (n == 0)
		return 0;
	return num;
}