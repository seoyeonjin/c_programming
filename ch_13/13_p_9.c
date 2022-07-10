#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int compute_vowel_count(const char* sentence);

int main(void) {
	printf("Enter a sentence: ");
	char sentence[100];
	int count = 0;

	scanf("%s", sentence);
	count = compute_vowel_count(sentence);
	printf("Your sentence contains %d vowels.", count);
	return 0;
}

int compute_vowel_count(const char* sentence) {
	int count = 0; 
	char ch;
	char* p = sentence;

	while (*p) {
		ch = toupper(*p);
		if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
			count += 1;
		p++;
	}

	return count;
}