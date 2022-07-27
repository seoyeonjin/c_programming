#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "readline.h"
#include "quicksort.h"
#define MAX 100

int main(void) {

	char* input[MAX];
	int i = 0;
	while (1) {
		printf("Enter word: ");
		input[i] = malloc(21);
		if ((input[i]) == NULL) {
			printf("Error\n");
			return;
		}
		int length = read_line(input[i], 20);
		if (length == 0)
			break;
		i++;
		if (i == MAX)
			break;
	}

	quicksort(input, 0, i - 1);

	printf("\nIn sorted order: ");
	for (int k = 0; k < i; k++)
		printf("%s ", input[k]);
	printf("\n");

	return 0;
}