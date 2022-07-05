#include <stdio.h>

int evaluate_position(char board[8][8]);

int main(void) {

	char board[8][8] = {
		{'K', 'Q', 'R', 'B'},
		{'k', 'q','r','b','n','p'},
	};
	int result = evaluate_position(board);
	printf("Result: %d", result);

	return 0;
}

int evaluate_position(char board[8][8]) {
	int sum_1 = 0, sum_2 = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			switch (board[i][j]) {
			case 'Q':
				sum_1 += 9;
				break;
			case 'q':
				sum_2 += 9;
				break;
			case 'R':
				sum_1 += 5;
				break;
			case 'r':
				sum_2 += 5;
				break;
			case 'B':
				sum_1 += 3;
				break;
			case 'b':
				sum_2 += 3;
				break;
			case 'N':
				sum_1 += 3;
				break;
			case 'n':
				sum_2 += 3;
				break;
			case 'P':
				sum_1 += 1;
				break;
			case 'p':
				sum_2 += 1;
				break;
			default:
				break;
			}
		}
	}
	return sum_1 - sum_2;
}