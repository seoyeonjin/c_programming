#include <stdio.h>
#include <stdbool.h>

#define STACK_SIZE 100

int contents[STACK_SIZE];
int *top_ptr = 0;

void stack_overflow() {
	exit(0);
}

void stack_underflow() {
	exit(0);
}

void make_empty(void) {
	*top_ptr = 0;
}

bool is_empty(void) {
	return *top_ptr == 0;
}

bool is_full(void) {
	return *top_ptr == STACK_SIZE;
}

void push(int i) {
	if (is_full())
		stack_overflow();
	else
		contents[(*top_ptr)++] = i;
}

int pop(void) {
	if (is_empty())
		stack_underflow();
	else
		return contents[--(*top_ptr)];
}

int 