#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool are_anagrams(const char* word1, const char* word2);

int main(void) {
	char ch;
	char str1[80];
	char str2[80];
	bool flag;

	printf("Enter first word: ");
	scanf("%s", str1);

	printf("Enter second word: ");
	scanf("%s", str2);

	flag = are_anagrams(str1, str2);
	printf("The word are ");

	if (!flag)
		printf("not anagrams.");
	else
		printf("anagrams.");

	return 0;
}

bool are_anagrams(const char* word1, const char* word2) {
	int ch_array[26] = { 0 }; 
	bool result = true;  
	char* p = word1;
	char* p2 = word2;

	while (*p) {
		ch_array[toupper(*p) - 'A'] += 1;
		p++;
	}

	while (*p2) {
		ch_array[toupper(*p2) - 'A'] -= 1;
		p2++;
	}


	for (int i = 0; i < 26; i++) {
		if (ch_array[i] != 0)
			result = false;
	}
	return result;
}