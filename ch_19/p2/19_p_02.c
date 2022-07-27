#define _CRT_SECURE_NO_WARNINGS
#include "stack.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


#define STACK_SIZE 100

int main(void) {
	Stack contents = create();

	char ch;

	while (1) {
		printf("Enter an RPN expression: ");
		while ((ch = getchar()) != '\n') {
			if (ch == ' ');
			else if (ch - '0' >= 0 && ch - '0' <= 9)
				push(contents, ch);
			else if (ch == '*') {
				char ch_1 = pop(contents);
				char ch_2 = pop(contents);
				char result = (ch_1 - '0') * (ch_2 - '0');
				push(contents, result + '0');
			}
			else if (ch == '+') {
				char ch_1 = pop(contents);
				char ch_2 = pop(contents);
				int result = (ch_1 - '0') + (ch_2 - '0');
				push(contents, result + '0');
			}
			else if (ch == '-') {
				char ch_1 = pop(contents);
				char ch_2 = pop(contents);
				push(contents, ch_2 - ch_1 + '0');
			}
			else if (ch == '/') {
				char ch_1 = pop(contents);
				char ch_2 = pop(contents);
				int result = (ch_2 - '0') / (ch_1 - '0');
				push(contents, result + '0');
			}
			else if (ch == '=') {
				int result = pop(contents);
				printf("Value of expression: %d\n", result - '0');
			}
			else {
				exit(0);
			}
		}
	}
	destroy(contents);
	return 0;
}