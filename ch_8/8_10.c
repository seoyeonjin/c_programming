#include <stdio.h>
#define BLOCK 8

int main(void) {
	char chess_board[BLOCK][BLOCK] = { 
		{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
		{'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
		{' ', '.', ' ', '.', ' ', '.', ' ', '.'},
		{'.', ' ', '.', ' ', '.', ' ', '.', ' '},
		{' ', '.', ' ', '.', ' ', '.', ' ', '.'},
		{'.', ' ', '.', ' ', '.', ' ', '.', ' '},
		{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
		{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'} 
	};

	return 0;
}