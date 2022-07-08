#include <stdio.h>

void store_zeros(int *a, int n) {
	int* p;

	for (p = a; p < a + n; p++)
		*p = 0;
}

int main(void) {

	int a[] = { 1,2,3,4 };
	int n = 4;

	store_zeros(a, n);

	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}