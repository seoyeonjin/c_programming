#include <stdio.h>

int main(void) {
	printf("Enter a sentence: ");
	char ch = getchar();
	char ch_array[100];
	int index = 0;

	while (ch != '?' && ch != '!' && ch != '.') {
		ch_array[index] = ch;
		index++;
		ch = getchar();
	}
	ch_array[index] = ch;
	printf("Reversal of sentence: ");

	char* space_index = ch_array + index;

	for (char* i = ch_array + index; i >= ch_array; i--) {
		if (*i == ' ') {
			for (char* j = i + 1; j < space_index; j++)
				printf("%c", *j);
			space_index = i;
			printf(" ");
		}
		if (i == ch_array) {
			for (char* j = i; j < space_index; j++)
				printf("%c", *j);
			space_index = i;
		}
	}
	printf("%c", ch_array[index]);

	return 0;
}