#include <stdio.h>
#include <stdlib.h>

void* my_malloc(int n);

int main(void) {

	return 0; 
}

void* my_malloc(int n) {

	void *new = malloc(n) ;

	if (new == NULL) {
		printf("Error");
		return;
	}

	return new;
}