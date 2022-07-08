#include <stdio.h>
#include <stdbool.h>

bool search(const int a[], int n, int key);

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
	int key = 32;
	bool result;

	for (int i = 0; i < 7; i++) {
		result = search(&temperatures[i], n, key);
		if (result)
			break;
	}

	if (result)
		printf("%d: 존재함", key);
	else
		printf("%d: 존재하지 않음", key);
		
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