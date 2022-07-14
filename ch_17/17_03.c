#include <stdio.h>
#include <stdlib.h>

int* create_array(int n, int initial_value);


int main(void) {

	int* a = create_array(10, 3);

	for (int* p = a; p < a + 10; p++) {
		printf("%d ", *p);
	}
	return 0;
}
int* create_array(int n, int initial_value) {
	int* new = malloc(n * sizeof(int));

	if (new == NULL) {
		printf("Error");
		return NULL;
	}

	for (int* p = new; p < new + n; p++)
		*p = initial_value;

	return new;
}