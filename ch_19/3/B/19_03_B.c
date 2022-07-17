#include <stdio.h>
#include "queue.h"
#define PUBLIC
#define PRIVATE static
#define QUEUE_MAX 100

// PRIVATE Item contents[QUEUE_MAX];

typedef struct {
	Item value; 
	struct node* next;
}node;

PRIVATE node* first = NULL;
PRIVATE node* second = NULL;
PRIVATE int num = 0;

PUBLIC void enqueue(Item i) {

	node* new_node;

	new_node = malloc(sizeof(node));

	if (new_node == NULL) {
		printf("Error");
		return;
	}

	new_node->value = i;
	new_node->next = NULL; 


	if (first == NULL) {
		first = new_node;
		second = new_node;

	}
	else {
		second->next = new_node;
		second = new_node;
	}
	num++;
}

PUBLIC Item dequeue(void) {

	if (!is_empty()) {
		Item item = first->value;

		struct node* temp = first;
		first = first->next;
		free(temp);
		num--;
		return item;
	}

}

PUBLIC Item get_first(Queue q) {
	if (!is_empty(q))
		return first->value;
}
PUBLIC Item get_last(Queue q) {
	if (!is_empty(q))
		return second->value;
}

PUBLIC bool is_empty(void) {
	return num == 0;
}