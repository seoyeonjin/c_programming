#include <stdio.h>
#include <stdlib.h>

#define NAME_LEN 10

struct part {
	int number;
	char name[NAME_LEN + 1];
	int on_hand;
};

void print_part(struct part *p);

int main(void) {

	// parameter�� pointer
	// pinrt_part (16.2)
	return 0;
}

void print_part(struct part *p) {
	printf("Part number: %d\n", p->number);
	printf("Part name: %s\n", p->name);
	printf("Quantity on hand: %d\n", p->on_hand);
}