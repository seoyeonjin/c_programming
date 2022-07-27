#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	float max = 0, number; 
	
	do {
		printf("Enter a number: ");
		scanf("%f", &number);
		if (max < number)
			max = number;
	} while (number > 0);

	printf("The largest number entered was %f", max);

	return 0;
}