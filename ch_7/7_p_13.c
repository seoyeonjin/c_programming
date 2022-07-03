#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	float average_length; 
	char ch;
	int word_count = 1, ch_count = 0;

	printf("Enter a sentence: ");

	while ((ch = getchar()) != '\n') {
		if (ch == ' ')
			word_count += 1;
		else
			ch_count += 1;
	}
	average_length = (float)ch_count / word_count;
	printf("Average word lenght: %.1f", average_length);
	return 0;
}