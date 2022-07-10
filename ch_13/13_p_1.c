#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	char str[21]; 

	char smallest_word[21] = "z";
	char largest_word[21] = "";

	for (;;) {
		printf("Enter word: ");
		scanf("%s", str);
		if (strlen(str) == 4)
			break;
		if (strcmp(str, smallest_word) < 0)
			strcpy(smallest_word, str);
		else if (strcmp(largest_word, str) < 0)
			strcpy(largest_word, str);
	}

	printf("Smallest word: %s\n", smallest_word);
	printf("Largest word: %s\n", largest_word);
	
	return 0;
}