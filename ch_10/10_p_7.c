#include <stdio.h>

#define MAX_DIGITS 10

//2 array 

const int segments[10][7] = {
	{1,1,1,1,1,1,0},
	{0,1,1,0,0,0,0},
	{1,1,0,1,1,0,1},
	{1,1,1,1,0,0,1},
	{0,1,1,0,0,1,1},
	{1,0,1,1,0,1,1},
	{1,0,1,1,1,1,1},
	{1,1,1,0,0,0,0},
	{1,1,1,1,1,1,1},
	{1,1,1,1,0,1,1}, };

char digits[4][MAX_DIGITS * 4];

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(void) {
	char ch;
	int count = 0;
	printf("Enter a number: ");
	
	clear_digits_array();

	while ((ch = getchar()) != '\n') {
		if (count > MAX_DIGITS-1)
			break;
		if (ch - '0' >= 0 && ch - '0' <= 9) {
			printf("%d: \n", count);
			process_digit(ch - '0', count); //0부터 9까지
			count++;
		}
	}

	print_digits_array();

	return 0;
}

void clear_digits_array(void) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < MAX_DIGITS * 4; j++)
			digits[i][j] = ' ';
	}
}
void process_digit(int digit, int position) {

	int pos = position * 4;

	if (segments[digit][0])
		digits[0][1 + pos] = '_';
	if (segments[digit][1])
		digits[1][2 + pos] = '|';
	if (segments[digit][2])
		digits[2][2 + pos] = '|';
	if (segments[digit][3])
		digits[2][1 + pos] = '_';
	if (segments[digit][4])
		digits[2][0 + pos] = '|';
	if (segments[digit][5])
		digits[1][0 + pos] = '|';
	if (segments[digit][6])
		digits[1][1 + pos] = '_';

}
void print_digits_array(void) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < MAX_DIGITS * 4; j++)
			printf("%c", digits[i][j]);
		printf("\n");
	}
}
