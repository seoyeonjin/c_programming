#include <stdio.h>
#include <stdlib.h>
#include "queueADT.h"

#define	QUEUE_SIZE 100

struct node {
	Item data;
	struct node* next;
};

struct queue_type {
	struct node* head, * tail;
};

static void terminate(const char* message) {
	printf("%s\n", message);
	exit(EXIT_FAILURE);
}

Queue create(int n) {
	Queue q = malloc(sizeof(struct queue_type));
	if (q == NULL)
		terminate("Error in create: stack could not be created.");

	q->head = NULL;
	q->tail = NULL;
	return q;
}

void destroy(Queue q) {
	make_empty(q);
	free(q);
}

void make_empty(Queue q) {
	while (!is_empty(q))
		dequeue(q);
}

void enqueue(Queue q, Item i) {
	struct node* new_node = malloc(sizeof(struct node));
	if(new_node == NULL)
		terminate("Error in enqueue: queue is full.");

	new_node->data = i;
	new_node->next = NULL;

	if (q->head == NULL) {
		q->head = new_node;
		q->tail = new_node;
	}
	else {
		q->head->next = new_node;
		q->head = new_node;
	}
}

Item dequeue(Queue q) {
	if (is_empty(q))
		terminate("Error in dequeue: queue is empty.");

	Item item = q->tail->data;

	struct node* temp = q->tail;
	if (q->tail == q->head)
		q->head = NULL; //마지막 노드 삭제할 때
	q->tail = q->tail->next;
	free(temp);
	return item;
}

Item get_first(Queue q) {
	if (!is_empty(q))
		return q->head->data;
}
Item get_last(Queue q) {
	if (!is_empty(q))
		return q->tail->data;
}
bool is_empty(Queue q) {
	return q->head == NULL;
}

bool is_full(Queue q) {
	return false;
}