#include <stdio.h>

union floating {
	float value;
	struct floating_in {
		unsigned int fraction : 23;
		unsigned int exponent : 8;
		unsigned int sign : 1;
	} f;
} u;

int main(void) {

	union floating f;

	u.f.sign = 1;
	u.f.exponent = 128;
	u.f.fraction = 0;

	printf("%.1f\n", u.value);
	return 0;
}