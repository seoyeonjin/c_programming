#pragma once

#include <stdbool.h>

typedef int Item;

typedef struct queue_type* Queue; 

void enqueue(Item i);
Item dequeue(void);

Item get_first(void);
Item get_last(void);

bool is_empty(void);