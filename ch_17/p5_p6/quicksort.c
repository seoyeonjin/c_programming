#include <string.h>

void quicksort(char* a[], int low, int high) {
	int middle;

	if (low >= high) return;
	middle = split(a, low, high);
	quicksort(a, low, middle - 1);
	quicksort(a, middle + 1, high);
}

int split(char* a[], int low, int high) {
	int part_element = a[low];

	for (;;) {
		while (low < high && strcmp(part_element,a[high]) <= 0)
			high--;
		if (low >= high) break;
		a[low++] = a[high];

		while (low < high && strcmp(a[low],part_element) <= 0)
			low++;
		if (low >= high) break;
		a[high--] = a[low];
	}
	a[high] = part_element;
	return high;
}