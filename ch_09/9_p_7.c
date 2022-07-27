#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

long long int calc_even(long long int x, long long int n);
long long int calc_odd(long long int x, long long int n);

int main(void) {
	long long int x, n;
	printf("Enter x & n: ");
	scanf("%lld%lld", &x, &n);

	long long int result;
	if (n % 2 == 0)
		result = calc_even(x, n);
	else
		result = calc_odd(x, n);
	printf("Result: %lld", result);
	return 0;
}

long long int calc_even(long long int x, long long int n) {
	if (n == 1)
		return x;
	else if (n ==0)
		return 1;
	else
		return calc_even(x, n / 2) * calc_even(x, n / 2);
}

long long int calc_odd(long long int x, long long int n) {
	if (n == 1)
		return x;
	else
		return x * calc_odd(x, n - 1);
}
