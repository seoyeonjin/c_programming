#include <stdio.h>

#define NELEMS(a) ((unsigned int) (sizeof(a) / sizeof(a[0])))

int main(void) {
	int a[] = { 1,2,3,4 };
	printf("%u", NELEMS(a));

	return 0;
}