#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main(void) {

	char ch;
	int ch_array_1[26] = { 0 };
	int ch_array_2[26] = { 0 };

	read_word(ch_array_1);
	read_word(ch_array_2);

	bool flag = equal_array(ch_array_1, ch_array_2);
	if (flag == 0)
		printf("not anagrams.");
	else
		printf("anagrams.");

	return 0;
}

void read_word(int counts[26]) {
	char ch;
	printf("Enter a word: ");
	while ((ch = getchar()) != '\n') {
		if (isalpha(ch)) {
			ch = tolower(ch);
			counts[ch - 'a'] += 1;
		}
	}
}
bool equal_array(int counts1[26], int counts2[26]) {
	printf("The word are ");
	bool flag = true;
	for (int i = 0; i < 26; i++) {
		if (counts1[i] != counts2[i])
			flag = false;
	}
	return flag;


}