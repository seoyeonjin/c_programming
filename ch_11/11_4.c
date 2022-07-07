#include <stdio.h>

void swap(int* p, int* q) {
	int temp = *p;
	*p = *q;
	*q = temp;
}
int main(void) {
	int a, b;
	a = 3; 
	b = 4; 
	swap(&a, &b);

	printf("%d %d", a, b);

	return 0;
}