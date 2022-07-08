#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define N 10

void max_min(int a[], int n, int* max, int* min);

int main(void) {
	
	int b[N], i, big, small;

	printf("Enter %d numbers: ", N);
	for (i = 0; i < N; i++)
		scanf("%d", &b[i]);

	max_min(b, N, &big, &small);

	printf("Largest: %d\n", big);
	printf("Samllest: %d\n", small);

	return 0;
}

void max_min(int a[], int n, int* max, int* min) {
	int* i; 

	*max = *min = a[0];

	for (i = a; i < a + n; i++) {
		if (*i > *max)
			*max = *i;
		else if (*i < *min)
			*min = *i;
	}
}