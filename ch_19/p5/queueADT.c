#include <stdio.h>
#include <stdlib.h>
#include "queueADT.h"

#define	QUEUE_SIZE 100

struct queue_type {
	int contents[QUEUE_SIZE];
	int head, tail;
};

static void terminate(const char* message) {
	printf("%s\n", message);
	exit(EXIT_FAILURE);
}

Queue create(void) {
	Queue q = malloc(sizeof(struct queue_type));
	if (q == NULL)
		terminate("Error in create: stack could not be created.");
	q->head = 0;
	q->tail = 0;
	return q;
}

void destroy(Queue q) {
	free(q);
}

void make_empty(Queue q) {
	q->head = 0;
	q->tail = 0;
}

void enqueue(Queue q, Item i) {
	if (is_full(q)){
		terminate("Error in enqueue: queue is full.");
	}
	q->contents[q->head] = i;
	q->head = (q->head + 1) % QUEUE_SIZE;
}

Item dequeue(Queue q) {
	if (is_empty(q))
		terminate("Error in dequeue: queue is empty.");
	Item item = q->contents[q->tail];
	q->tail = (q->tail + 1) % QUEUE_SIZE;
	return item;
}

Item get_first(Queue q) {
	if (!is_empty(q))
		return q->contents[q->head];
}
Item get_last(Queue q) {
	if (!is_empty(q))
		return q->contents[q->tail];
}
bool is_empty(Queue q) {
	return q->head == q->tail;
}

bool is_full(Queue q) {
	if ((q->head + 1) % QUEUE_SIZE == q->tail)
		return true;
	return false;
}