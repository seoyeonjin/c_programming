#include <stdio.h>

void find_two_largest(int *a, int n, int* largest, int* second_largest);

int main(void) {
	int a[4] = { 7,6,3,4 };
	int n = 4;
	int lar, se_lar;

	find_two_largest(a, n, &lar, &se_lar);

	printf("largest: %d second largest: %d\n", lar, se_lar);
	return 0;
}

void find_two_largest(int *a, int n, int* largest, int* second_largest) {
	// 초기화 
	if (*a < *(a+1)) {
		*largest = *(a+1);
		*second_largest = *a;
	}
	else {
		*largest = *a;
		*second_largest = *(a + 1);
	}
	//찾기
	for (int* p = a + 2; p < a + n; p++) {
		if (*p > *largest) {
			*second_largest = *largest;
			*largest = *p;
		}
		else if (*p > *second_largest)
			*second_largest = *p;
	}
}