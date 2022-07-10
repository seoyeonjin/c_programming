#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	printf("Enter a sentence: ");
	char str[30][21];
	char ch = getchar();
	int index = 0, count = 0;

	while (ch != '?' && ch != '!' && ch != '.') {
		if (ch == ' ') {
			str[count][index] = '\0';
			count++;
			index = 0;
		}
		else {
			str[count][index] = ch;
			index++;
		}
		ch = getchar();
	}
	str[count][index] = '\0';

	printf("Reversal of sentence: ");

	for (int i = count; i >= 0; i--) {
		if (i == count)
			printf("%s", str[i]);
		else
			printf(" %s", str[i]);
	}

	printf("%c",ch);

	return 0;
}