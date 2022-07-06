#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define STACK_SIZE 100

char contents[STACK_SIZE];
int top = 0;

void stack_underflow(void) {
	exit(0);
}

void stack_overflow(void) {
	exit(0);
}

void make_empty(void) {
	top = 0;
}

bool is_empty(void) {
	return top == 0;
}

bool is_full(void) {
	return top == STACK_SIZE;
}

void push(char i) {
	if (is_full())
		stack_overflow();
	else
		contents[top++] = i;
}

char pop(void) {
	if (is_empty())
		stack_underflow();
	else
		return contents[--top];
}


int main(void) {
	printf("Enter parentheses and/or brace: ");
	char ch; 
	int par = 0, brace = 0;
	make_empty();

	while ((ch = getchar()) != '\n') {
		if (!is_full())
			push(ch);
	}
	while (!is_empty()) {
		ch = pop();
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