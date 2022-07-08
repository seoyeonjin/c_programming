#include <stdio.h>
#include <stdbool.h>

bool search(const int a[], int n, int key);
int* find_largest(int* a, int n);

int main(void) {
	int temperatures[7][24] = {
		{0,1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9,0,1,2,3},
		{0,1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9,0,1,2,3},
		{0,1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9,0,1,2,3},
		{0,1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9,0,1,2,3},
		{0,1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9,0,1,2,3},
		{0,1,2,3,4,5,6,7,8,9,32,1,2,3,4,5,6,7,8,9,0,1,2,3},
		{0,1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9,0,1,2,3},
	};
	int n = 24;
	int* result; 
	
	for (int i = 0; i < 7; i++) {
		result = find_largest(temperatures[i], n);
		printf("The highest temp: %d\n", *result);
	}

	return 0;
}

bool search(const int a[], int n, int key) {
	int* p;
	bool result = false;

	for (p = a; p < a + n; p++) {
		if (key == *p)
			result = true;
	}

	return result;
}

int* find_largest(int* a, int n) {
	int max = *a;
	int max_p = a;
	for (int* p = a; p < a + n; p++) {
		if (*p > max) {
			max = *p;
			max_p = p;
		}
	}
	return max_p;
}