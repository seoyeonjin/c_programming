#include <stdio.h>


double innner_product(double a[], double b[], int n);

int main(void) {

	double a[] = { 1,2,3,4 };
	double b[] = { 1,2,3,4 };
	int n = 4;
	printf("Result: %lf", innner_product(a, b, n));

	return 0;
}

double innner_product(double a[], double b[], int n) {
	double product_sum = 0;
	for (int i = 0; i < n; i++) {
		product_sum += a[i] * b[i];
	}
	return product_sum;
}