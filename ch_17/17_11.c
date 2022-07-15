#include <stdio.h>
#include <stdlib.h>

struct node {
	int value;
	struct node* next;
};

int count_occurrences(struct node* list, int n);

int main(void) {

	return 0;
}

int count_occurrences(struct node* list, int n) {
	int count = 0; 
	for (struct node* p = list; p != NULL; p = p->next) {
		if (p->value == n)
			count++;
	}
	return count;
}