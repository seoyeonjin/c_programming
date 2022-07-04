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

	char space_index = index;

	for (int i = index; i >=0 ; i--) {
		if (ch_array[i] == ' ') {
			for (int j = i+1; j < space_index; j++)
				printf("%c", ch_array[j]);
			space_index = i;
			printf(" ");
		}
		if (i == 0) {
			for (int j = i; j < space_index; j++)
				printf("%c", ch_array[j]);
			space_index = i;
		}
	}
	printf("%c", ch_array[index]);

	return 0;
}