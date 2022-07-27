#include <stdio.h>

int fact(int n);

int main(void) {

	printf("%d", fact(5));

	return 0;
}

int fact(int n) {
	int result = 1; 
	for (int i = 1; i <= n; i++) {
		result *= i;
	}
	return result;
}