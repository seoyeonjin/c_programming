#include <stdio.h>

int* find_largest(int a[], int n);

int main(void) {

	int a[4] = { 5,4,1,2 };
	int n = 4;
	int* p; 

	p = find_largest(a, n);
	printf("largest: %d", *p);

	return 0; 
}

int* find_largest(int a[], int n) {
	int max = a[0];
	int max_p = &a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
			max_p = &a[i];
		}
	}
	return max_p;
}