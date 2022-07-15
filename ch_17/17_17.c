#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100

int comparison(void* start, void* end);

int main(void) {
	int a[N], i;

	srand((int)time(NULL));

	for (i = 0; i < N; i++)
		a[i] = rand();

	qsort(a + 50, N - 50, sizeof(a[0]), comparison);

	printf("In sorted order: ");
	for (i = 0; i < N; i++)
		printf("%d ", a[i]);
	printf("\n");

	return 0;
}

int comparison(void* p, void* q)
{
	if (*(int*)p > *(int*)q)
		return 1;
	else if (*(int*)p < *(int*)q)
		return -1;
	else
		return 0;
}