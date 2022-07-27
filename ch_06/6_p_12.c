#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	float sum = 0, mul = 1, ep;

	printf("Enter a number: ");
	scanf("%f", &ep);

	int i = 1;

	while (mul == 1 || (1.0f / mul) > ep) {
		
		sum = sum + (1.0f / mul);
		mul = 1;
		for (int j = 1; j <= i; j++) {
			mul = mul * j;
		}
		i++;
	}
	
	printf("Sum: %f", sum);
	return 0;
}