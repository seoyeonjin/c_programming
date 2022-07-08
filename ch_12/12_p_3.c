#include <stdio.h>
#define SIZE 100

int main(void) {

	printf("Enter a message: ");

	char ch;
	char array[100];
	int count = 0;
	while ((ch = getchar()) != '\n' && count < SIZE) {
		array[count++] = ch;
	}

	printf("Reversal is: ");
	char* i = array + (count-1);
	while (i >= array) {
		printf("%c", *i--);
	}
	printf("\n");

	for (char* i = array + count -1; i >= array; i--) {
		printf("%c", *i);
	}

	printf("\n");
	for (char i = count - 1; i >= 0; i--) {
		printf("%c", array[i]);
	}
	return 0;
}