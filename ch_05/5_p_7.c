#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b, c, d, max, min;
	printf("Enter four integers: ");
	scanf("%d%d%d%d", &a, &b, &c, &d);

	if (a < b) {
		max = b;
		min = a;
	}
	else {
		max = a;
		min = b;
	}

	if (max < c)
		max = c;
	else if (min > c)
		min = c;


	if (max < d)
		max = d;
	else if (min > d)
		min = d;
		

	printf("Largest: %d\n", max);
	printf("Smallest: %d\n", min);

	/*
		if (n2 < n1) {
		min1 = n2;
		max1 = n1;
	}

	if (n4 < n3) {
		min2 = n4;
		max2 = n3;
	}

	if (min2 < min1) {
		min = min2;
	}

	if (max2 > max1) {
		max = max2;
	}
	*/

	return 0;
}