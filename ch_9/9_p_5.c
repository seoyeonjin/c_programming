#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void create_magic_square(int n, char magic_square[99][99]);
void printf_magic_square(int n, char magic_square[99][99]);

int main(void) {
	int n;
	printf("This program creates a magic square of a specified size.\n");
	printf("The size must be an odd number between 1 and 99.\n");
	printf("Enter size of magic square: ");
	scanf("%d", &n);
	int array[99][99] = { 0 };

	create_magic_square(n, array);
	printf_magic_square(n, array);



	return 0;
}

void create_magic_square(int n, char magic_square[99][99]) {
	int current = 1;
	int row = 0;
	int col = (n - 1) / 2;

	while (current <= (n * n)) {
		if (magic_square[row][col] == 0) {
			//printf("%d ", current);
			magic_square[row][col] = current;
			row = (row - 1) < 0 ? n - 1 : row - 1;
			col = (col + 1) == n ? 0 : col + 1;
		}
		else {
			row = (row + 1) == n ? 0 : row + 1;
			col = (col - 1) < 0 ? n - 1 : col - 1;
			row = (row + 1) == n ? 0 : row + 1;
			magic_square[row][col] = current;
			row = (row - 1) < 0 ? n - 1 : row - 1;
			col = (col + 1) == n ? 0 : col + 1;
		}
		current++;
	}
}
void printf_magic_square(int n, char magic_square[99][99]) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", magic_square[i][j]);
		}
		printf("\n");
	}
}