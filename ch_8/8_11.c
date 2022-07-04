#include <stdio.h>
#define ROWS 8
#define COLS 8

int main(void) {

	char checker_board[ROWS][COLS];
	for (int i = 0; i < ROWS; i++){
		for (int j = 0; j < COLS; j++) {
			if ((i + j) % 2 == 0)
				checker_board[i][j] = 'B';
			else
				checker_board[i][j] = 'R';
		}
	}

	for (int i = 0; i < ROWS; i++){
		for (int j = 0; j < COLS; j++) {
			printf("%c", checker_board[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}