#include <stdio.h>

int main(void) {
	int n = 5;
	// 1 - 10이 먼저 계산됨 -> -9
	// n == -9 의 결과는 0이므로 printf 되지 않음.
	if (n == 1 - 10) {
		printf("n is between 1 and 10\n");
	}
	return 0;
}