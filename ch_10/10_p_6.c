#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define STACK_SIZE 100

char contents[STACK_SIZE];
int top = 0;

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


int main(void) {

	char ch;

	while (1) {
		printf("Enter an RPN expression: ");
		while ((ch = getchar()) != '\n') {
			if (ch == ' ');
			else if (ch - '0' >= 0 && ch - '0' <= 9)
				push(ch);
			else if (ch == '*') {
				char ch_1 = pop();
				char ch_2 = pop();
				char result = (ch_1 - '0') * (ch_2 - '0');
				//printf("%d", result);
				push(result+'0'); //원래 숫자로 계산한 결과를 넣는다. 
			}
			else if (ch == '+') {
				char ch_1 = pop();
				char ch_2 = pop();
				//printf("%d %d: \n", ch_1, ch_2);
				int result = (ch_1 - '0') + (ch_2 - '0');
				//printf("%d", (ch_1 - '0') + (ch_2 - '0'));
				push(result + '0');
			}
			else if (ch == '-') {
				char ch_1 = pop();
				char ch_2 = pop();
				//printf("%c %d", ch_1, ch_1);
				//char result = ch_1 - ch_2;
				push(ch_2 -  ch_1 + '0');
			}
			else if (ch == '/') {
				char ch_1 = pop();
				char ch_2 = pop();
				int result = (ch_2 - '0') / (ch_1 - '0');
				printf("%d, %d: ", ch_1 - '0', ch_2 - '0');
				printf("%d", result);
				printf("%d", result + '0');
				push(result+'0');
			}
			else if (ch == '=') {
				int result = pop();
				printf("Value of expression: %d\n", result-'0');
			}
			else {
				exit(0);
			}
		}
	}
	return 0;
}