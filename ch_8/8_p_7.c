#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ROW 5
#define COL 5

int main(void) {
	int num;
	int num_array[ROW][COL] = {0};
	int row_total[5] = { 0 };
	int col_total[5] = { 0 };

	for (int i = 0; i < 5; i++) {
		printf("Enter row %d: ", i+1);
		for (int j = 0; j < 5; j++) {
			scanf("%d", &num); 
			num_array[i][j] = num;
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			row_total[i] = row_total[i] + num_array[i][j];
		}
	}
	
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			col_total[i] += num_array[j][i];
		}
	}

	printf("\nRow totals: ");
	for (int i = 0; i < 5; i++) {
		printf("%3d", row_total[i]);
	}

	printf("\nColumn totals: ");
	for (int i = 0; i < 5; i++) {
		printf("%3d", col_total[i]);
	}

	return 0; 
}