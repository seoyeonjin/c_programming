#include <stdio.h>
#include <stdlib.h>

struct node {
	int value;
	struct node* next;
};

struct node* find_last(struct node* list, int n);

int main(void) {

	return 0;
}

struct node* find_last(struct node* list, int n) {
	if (list == NULL)
		return NULL;
	else {
		for (struct node* p = list; p != NULL; p = p->next) {
			if (p->next == NULL)
				n = p->value;
		}
		return n;
	}
}