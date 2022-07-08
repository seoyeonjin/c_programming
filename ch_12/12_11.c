#include <stdio.h>

int* find_largest(int *a, int n);

int main(void) {

	int a[4] = { 3,4,1,2 };
	int n = 4;
	int* p;

	p = find_largest(a, n);
	printf("largest: %d", *p);

	return 0;
}

int* find_largest(int *a, int n) {
	int max = *a;
	int max_p = a;
	for (int *p = a; p < a + n; p++) {
		if (*p > max) {
			max = *p;
			max_p = p;
		}
	}
	return max_p;
}