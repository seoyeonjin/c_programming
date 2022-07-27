#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void selection_sort(int array[], int size);

int main(void) {
	int size;
	int array[100] = { 0 };
	printf("Enter the size: ");
	scanf("%d", &size);

	for (int i = 0; i < size; i++) {
		int num;
		printf("Enter a number: ");
		scanf("%d", &num);
		array[i] = num;
	}

	selection_sort(array, size);

	for (int i = 0; i < size; i++) {
		printf("%d ", array[i]);
	}

	printf("\n");
	
	return 0;
}

void selection_sort(int array[], int size) {
	if (size == 0) {
		return;
	}
	else {
		int max = array[0];
		int index = 0, temp;
		for (int i = 1; i < size; i++) {
			if (array[i] > max) {
				index = i;
				max = array[i];
			}
		}
		temp = array[index];
		array[index] = array[size - 1];
		array[size - 1] = temp;
		selection_sort(array, size - 1);
	}
}
