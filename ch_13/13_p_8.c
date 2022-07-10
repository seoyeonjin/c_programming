#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int compute_scrabble_value(const char* word);

int main(void) {
	char word[100];
	int sum = 0;
	printf("Enter a word: ");

	scanf("%s", word);

	sum = compute_scrabble_value(word);

	printf("Scrabble value: %d", sum);
	return 0;
}

int compute_scrabble_value(const char* word) {
	char* p = word;
	int sum = 0;
	while (*p) {
		*p = toupper(*p);
		if (*p == 'D' || *p == 'G')
			sum += 2;
		else if (*p == 'B' || *p == 'C' || *p == 'M' || *p == 'P')
			sum += 3;
		else if (*p == 'F' || *p == 'H' || *p == 'V' || *p == 'W' || *p == 'Y')
			sum += 4;
		else if (*p == 'K')
			sum += 5;
		else if (*p == 'J' || *p == 'X')
			sum += 8;
		else if (*p == 'Q' || *p == 'Z')
			sum += 10;
		else
			sum += 1;
		p++;
	}
	return sum;
}