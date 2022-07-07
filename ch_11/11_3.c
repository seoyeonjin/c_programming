#include <stdio.h>

void avg_sum(double a[], int n, double* avg, double* sum) {
	int i;
	// sum = 0.0; 
	// sum과 avg는 포인터이므로 바로 값 할당 x
	// *sum과 *avg
	*sum = 0.0;
	for (i = 0; i < n; i++)
		*sum += a[i];
	*avg = *sum / n;
}

int main(void) {
	double a[4] = { 1.1,2.2,3.3,4.4 };
	int n = 4;
	double avg, sum;

	avg_sum(a, n, &avg, &sum);
	printf("%lf", avg);
	return 0;
}