#include <stdio.h>

void swap(int a, int b);

int main(void) {
	int i = 1, j = 2;

	swap(i, j);
	printf("i = %d, j = %d\n", i, j);
	// 예상결과: 1, 2
	// 실제결과: 1, 2
	return 0;
}

void swap(int a, int b) {
	int temp = a; 
	a = b;
	b = temp;
}