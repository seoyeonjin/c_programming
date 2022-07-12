#define _CRT_SECURE_NO_WARNINGS
#include "stack.h"

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
				push(result + '0');
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
				push(ch_2 - ch_1 + '0');
			}
			else if (ch == '/') {
				char ch_1 = pop();
				char ch_2 = pop();
				int result = (ch_2 - '0') / (ch_1 - '0');
				push(result + '0');
			}
			else if (ch == '=') {
				int result = pop();
				printf("Value of expression: %d\n", result - '0');
			}
			else {
				exit(0);
			}
		}
	}
	return 0;
}