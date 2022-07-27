#ifndef	QUEUE_H
#define QUEUE_H

#include <stdbool.h>

typedef int Item;

typedef struct queue_type* Queue;

Queue create(void);
void destroy(Queue q);
void make_empty(Queue q);

void enqueue(Queue q, Item i); //insert
Item dequeue(Queue q); // removing

Item get_first(Queue q); // returning first item
Item get_last(Queue q); // returning last item

bool is_empty(Queue q); // testing empty
bool is_full(Queue q);

#endif