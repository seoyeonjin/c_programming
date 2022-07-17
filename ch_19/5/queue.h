#pragma once

#include <stdbool.h>
#define QUEUE_SIZE 100

typedef int Item;
typedef struct queue_type {
	Item contents[QUEUE_SIZE];
	int first;
	int second;
	int num;
} *Queue;

void enqueue(Item i);
Item dequeue(Queue q);

Item get_first(Queue q);
Item get_last(Queue q);

bool is_empty(Queue q);