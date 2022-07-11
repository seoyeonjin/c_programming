#include <stdio.h>

#define ERROR(str, item) (fprintf(stderr, (str), (item)));
int main(void) {

	int index = 0;
	//fprintf(stderr, "Range error: index = %d\n", index);
	ERROR("Range error: index = %d\n", index);
}