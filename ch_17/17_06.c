#include <stdio.h>
#include <stdlib.h>

struct node {
	int value;
	struct node* next;
};

void* delete_from_list(struct node** ptr, int n) {
	struct node* list = *ptr;

	while (list) {
		if (list->value == n) {
			*ptr = list->next;
			free(list);
			break;
		}
		list = list->next;
		ptr = &list;
	}

}