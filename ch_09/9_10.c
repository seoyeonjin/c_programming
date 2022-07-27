#include <stdio.h>

int f_a(int a[], int b);
float f_b(int a[], int b);
int f_c(int a[], int b);

int main(void) {

	int a[] = { 1,2,3,4 };
	int b = 4;

	printf("Result A: %d\n", f_a(a, b));
	printf("Result B: %f\n", f_b(a, b));
	printf("Result C: %d\n", f_c(a, b));

	return 0;
}

int f_a(int a[], int b) {
	int max = a[0];
	for (int i = 1; i < b; i++) {
		if (a[i] > max)
			max = a[i];
	}
	return max;
}

float f_b(int a[], int b) {
	int sum = 0; 
	for (int i = 0; i < b; i++) {
		sum += a[i];
	}
	return (float) sum / b;
}

int f_c(int a[], int b) {
	int count = 0; 
	for (int i = 0; i < b; i++) {
		if (a[i] > 0)
			count++;
	}
	return count;
}