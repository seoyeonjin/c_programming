#include <stdio.h>
#include "queue.h"
#define PUBLIC
#define PRIVATE static
#define QUEUE_MAX 100

PRIVATE Item contents[QUEUE_MAX];

PRIVATE int first = 0;
PRIVATE int second = 0;
PRIVATE int num = 0;

PUBLIC void enqueue(Item i) {

	if (num < QUEUE_MAX) {
		contents[first] = i;
		first = (first + 1) % QUEUE_MAX ;
		num++;
	}

}

PUBLIC Item dequeue(void) {
	if (!is_empty()) {
		Item item = contents[second];
		second = (second + 1) % QUEUE_MAX;
		num--;
		return item;
	}
}

PUBLIC Item get_first(void) {
	if (!is_empty())
		return contents[first];
}
PUBLIC Item get_last(void) {
	if (!is_empty())
		return contents[second];
}

PUBLIC bool is_empty(void) {
	return num == 0;
}