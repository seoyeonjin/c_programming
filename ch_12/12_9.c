#include <stdio.h>

double inner_product(const double* a, const double* b, int n);

int main(void) {
	double a[] = { 1,2,3,4 };
	double b[] = { 1,2,3,4 };
	int n = 4;

	double result = inner_product(a, b, n);

	printf("%lf", result);

	return 0;
}

double inner_product(const double* a, const double* b, int n) {

	double* a_p = a, * b_p = b;
	double result = 0;
	
	while (n > 0) {
		result += (*a_p)++ * (*b_p)++;
		n--;
	}
	return result;
}

