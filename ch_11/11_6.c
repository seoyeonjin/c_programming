#include <stdio.h>

void find_two_largest(int a[], int n, int* largest, int* second_largest);

int main(void) {
	int a[4] = { 7,6,3,4 };
	int n = 4;
	int lar, se_lar; 

	find_two_largest(a, n, &lar, &se_lar);

	printf("largest: %d second largest: %d\n", lar, se_lar);
	return 0;
}

void find_two_largest(int a[], int n, int* largest, int* second_largest) {
	// 초기화 
	if (a[0] < a[1]) {
		*largest = a[1];
		*second_largest = a[0];
	}
	else {
		*largest = a[0];
		*second_largest = a[1];
	}
	//찾기
	for (int i = 2; i < n; i++) {
		if (a[i] > *largest) {
			*second_largest = *largest;
			*largest = a[i];
		}
		else if (a[i] > *second_largest)
			*second_largest = a[i];
	}
}