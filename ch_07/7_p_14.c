#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
	float y = 1, x, average;

	printf("Enter a positive number: ");
	scanf("%f", &x);

	average = (y + x / y) / 2;

	while (fabs(y - average) > 0.00001) {

		y = average; 
		average = (y + x / y) / 2;
	}
	
	printf("Square root: %.5f", y);
	return 0;
}