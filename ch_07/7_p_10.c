#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	printf("Enter a sentence: ");
	char ch; 
	int count = 0; 

	while ((ch = getchar()) != '\n') {
		ch = toupper(ch);
		if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
			count += 1;
	}

	printf("Your sentence contains %d vowels.", count);
	return 0; 
}