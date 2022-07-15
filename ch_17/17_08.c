#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


#define STACK_SIZE 100

struct node {
	int value;
	struct node* pointer;
};

struct node* top = NULL;

void stack_underflow(void);

void make_empty(void);

bool is_empty(void);

bool push(int i);

int pop(void);

void stack_underflow(void) {
	printf("Not enough operands");
	exit(0);
}

void make_empty(void) {
	while (top) {
		struct node* temp = top;
		top = top->pointer;
		free(temp);
	}
}

bool is_empty(void) {
	return top == NULL;
}

bool push(int i) {
	struct node* new_node = malloc(sizeof(struct node));
	if (new_node == NULL)
		return false;
	else {
		new_node->value = i;
		new_node->pointer = top;
		top = new_node;
		return true;
	}
}

int pop(void) {
	if (is_empty())
		stack_underflow();
	else {
		struct node* temp = top;
		int result = temp->value;
		top = top->pointer;
		free(temp);
		return result;
	}
}