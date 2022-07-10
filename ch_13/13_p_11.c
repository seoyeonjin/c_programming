#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double compute_average_word_length(const char* sentence);

int main(void) {
	double average_length;
	char sentence[100];

	printf("Enter a sentence: ");
	gets(sentence);
	average_length = compute_average_word_length(sentence);

	printf("Average word lenght: %.1f", average_length);
	return 0;
}

double compute_average_word_length(const char* sentence) {
	int word_count = 1, ch_count = 0;
	char* p = sentence;

	while (*p++) {
		if (*p == ' ')
			word_count += 1;
		else
			ch_count += 1;
	}
	double average_length = (double)ch_count / word_count;

	return average_length;
}