#include <stdio.h>
#include <stdlib.h>

int main(void) {

	struct point { int x, y; };
	struct rectangle { struct point upper_left, lower_right; };
	struct rectangle* p;

	p = malloc(sizeof(struct rectangle));

	if (p == NULL) {
		printf("Error");
		return;
	}

	p->upper_left.x = 10;
	p->upper_left.y = 25;

	p->lower_right.x = 20;
	p->lower_right.y = 15;

	printf("upper_left (x,y): (%d,%d)\n", p->upper_left.x, p->upper_left.y);
	printf("lower_right (x,y): (%d,%d)", p->lower_right.x, p->lower_right.y);
}

