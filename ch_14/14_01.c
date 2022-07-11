#include <stdio.h>

#define CUBE(x) ((x) * (x) * (x))
#define REMAINDER(n) ((n) % 4)
#define PRODUCT(x,y) ((x)*(y) < 100)

int main(void) {
	int x = 30;
	int y = 4;
	printf("%d\n", CUBE(x));
	printf("%d\n", REMAINDER(3));
	printf("%d\n", PRODUCT(x, y));

	return 0;
}

