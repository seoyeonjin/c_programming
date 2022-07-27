#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n; 
	int current = 1;
	printf("This program creates a magic square of a specified size.\n");
	printf("The size must be an odd number between 1 and 99.\n");
	printf("Enter size of magic square: ");
	scanf("%d", &n);
	int array[99][99] = { 0 };

	int row = 0;
	int col = (n - 1) / 2; //1이 들어갈 위치

	while (current <= (n*n)) {
		if (array[row][col] == 0) {
			//printf("%d ", current);
			array[row][col] = current;
			row = (row - 1) < 0 ? n-1: row-1;
			col = (col + 1) == n ? 0 : col + 1;
		}
		else {
			row = (row + 1) == n ? 0 : row + 1;
			col = (col - 1) < 0 ? n - 1 : col - 1;
			row = (row + 1) == n ? 0 : row + 1;
			array[row][col] = current;
			row = (row - 1) < 0 ? n - 1 : row - 1;
			col = (col + 1) == n ? 0 : col + 1;
		}
		current++;
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}

	return 0; 
}