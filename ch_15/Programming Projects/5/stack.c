#include <stdlib.h>
#include <stdio.h>

#define STACK_SIZE 100

int contents[STACK_SIZE];
int top = 0;

void stack_underflow(void);

void stack_overflow(void);

void make_empty(void);

bool is_empty(void);

bool is_full(void);

void push(char i);

char pop(void);

void stack_underflow(void) {
	printf("Not enough operands");
	exit(0);
}

void stack_overflow(void) {
	printf("Expression is too complex");
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