#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "stack.h"
#define STACK_SIZE 100


int main(void) {
	Stack contents = create();
	printf("Enter parentheses and/or brace: ");
	char ch;
	int par = 0, brace = 0;
	make_empty(contents);

	while ((ch = getchar()) != '\n') {
		if (!is_full(contents))
			push(contents, ch);
	}
	while (!is_empty(contents)) {
		ch = pop(contents);
		switch (ch) {
		case '{':
			brace++;
			break;
		case '}':
			brace--;
			break;
		case '(':
			par++;
			break;
		case ')':
			par--;
			break;
		default:
			break;
		}
	}
	if (par == 0 && brace == 0)
		printf("Parentheses/braces are nested properly");
	else
		printf("Parentheses/braces are not nested");

	return 0;
}