#include <stdio.h>
#include <stdbool.h>

bool search(const int a[], int n, int key);

int main(void) {
	int a[] = { 1,2,3,4 };
	int n = 4;
	int key = 0;

	bool result = search(a, n, key);
	if (result)
		printf("%d: ������", key);
	else
		printf("%d: �������� ����", key);

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