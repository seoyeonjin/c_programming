#pragma once

#include <stdbool.h>

typedef int Item;

typedef struct queue_type* Queue; 

void enqueue(Queue q, Item i); //insert
Item dequeue(Queue q); // removing

Item get_first(Queue q); // returning first item
Item get_last(Queue q); // returning last item

bool is_empty(Queue q); // testing empty