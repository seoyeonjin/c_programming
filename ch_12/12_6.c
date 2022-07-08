#include <stdio.h>

int sum_array(const int* a, int n) {
	int sum;
	sum = 0;
	int* p = a;

	for (p=a; p < a + n; p++)
		sum += *p;

	return sum;
}


int main(void) {

	int a[] = { 1,2,3,4 };
	int n = 4; 

	int result = sum_array(a, n);
	printf("%d", result);
	return 0;
}