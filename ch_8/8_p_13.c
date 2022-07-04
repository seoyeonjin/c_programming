#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	printf("Enter a first and last name: ");

	char first, extra, last;

	first = getchar();


	while ((extra = getchar()) != ' ');

	char last_array[20];
	int index = 0; 

	while ((last = getchar()) != '\n') {
		last_array[index] = last;
		index++;
	}

	printf("You entered the name: ");
	for (int i = 0; i < index; i++) {
		printf("%c", last_array[i]);
	}
	printf(", %c", first);
	return 0;
}