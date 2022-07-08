#include <stdio.h>
#define LEN 10

int sum_two_dimensional_array(const int (*a)[LEN], int n) {
	int* p;
	int sum = 0; 
	//int i, j, sum = 0; 

	for (p = &a[0][0]; p < &a[n][LEN]; p++)
		sum += *p;
	return sum;
}

int main(void) {
	int a[][LEN] = { { 1,2,3,4,5,6,7,8,9,10 }, { 1,2,3,4,5,6,7,8,9,10 } };
	int n = 1;
	int result = sum_two_dimensional_array(&a[0], n);
	printf("result: %d", result);

	return 0;
}

/*
int sum_two_dimensional_array(const int *a, int n)
{
	int sum = 0;
	const int *p;
	for (p = a; p < a + n; p++)
		sum += *p;
	return sum;
}*/