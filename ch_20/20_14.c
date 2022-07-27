#include <stdio.h>

struct floating {
	unsigned int fraction : 23;
	unsigned int exponent : 8;
	unsigned int sign : 1;
};

int main(void) {

	struct floating f;

	return 0;
}