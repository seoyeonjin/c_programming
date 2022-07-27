#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ROW 5
#define COL 5

int main(void) {
	int num;
	int num_array[ROW][COL] = { 0 };
	int row_total[5] = { 0 };
	int col_total[5] = { 0 };

	for (int i = 0; i < 5; i++) {
		printf("Enter %d student score: ", i + 1);
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

	int max[5] = { 0 };
	int min[5] = { 0 };

	for (int i = 0; i < 5; i++) {
		max[i] = num_array[0][i];
		min[i] = num_array[0][i];
 	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			col_total[i] = col_total[i] + num_array[j][i];
			if (max[i] < num_array[j][i]) {
				max[i] = num_array[j][i];
			}
			if (min[i] > num_array[j][i]) {
				min[i] = num_array[j][i];
			}
		}
	}

	printf("\nMAX: ");
	for (int i = 0; i < 5; i++) {
		printf("%3d", max[i]);
	}

	printf("\nMIN: ");
	for (int i = 0; i < 5; i++) {
		printf("%3d ", min[i]);
	}

	printf("\ntotals: ");
	for (int i = 0; i < 5; i++) {
		printf("%3d ", row_total[i]);
	}

	printf("\nAverage score for each quiz: ");
	for (int i = 0; i < 5; i++) {
		printf("%3.1f ", (float) col_total[i] / 5);
	}

	printf("\nAverage score for each student: ");
	for (int i = 0; i < 5; i++) {
		printf("%3.1f ", (float) row_total[i] / 5);
	}


	return 0;
}