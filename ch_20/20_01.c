#include <stdio.h>

int main(void) {

	unsigned short i, j, k;
	// (a) 0 (+ 먼저 계산)
	i = 8; j = 9;
	printf("%d\n", i >> 1 + j >> 1);
	// (b) 0
	i = 1; 
	printf("%d\n", i & ~i);
	// (c) 10 (&의 우선순위가 더 높음)
	i = 2; j = 8; k = 9; 
	printf("%d\n", i ^ j & k);
	// (d) 15 
	i = 7; j = 8; k = 9;
	printf("%d", i ^ j & k);

	return 0;
}