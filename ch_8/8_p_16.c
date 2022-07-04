#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main(void) {
	printf("Enter first word: ");
	char ch;
	int ch_array[26] = { 0 };
	int flag = 1;

	while ((ch = getchar()) != '\n') {
		if (isalpha(ch)) {
			ch = tolower(ch);
			ch_array[ch - 'a'] += 1;
		}

	}
	
	printf("Enter second word: ");
	while ((ch = getchar()) != '\n'){
		if (isalpha(ch)) {
			ch = tolower(ch);
			ch_array[ch - 'a'] -= 1;
		}
	}

	printf("The word are ");

	for (int i = 0; i < 26; i++) {
		if (ch_array[i] != 0)
			flag = 0;
	}
	if (flag == 0)
		printf("not anagrams.");
	else
		printf("anagrams.");

	return 0;
}