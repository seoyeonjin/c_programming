#include <stdio.h>

int main(int argc, int* argv[]) {
	int i = 0, sum = 0;

	for (i = 1; i < argc; i++)
		sum = sum + atoi(argv[i]);

	printf("Total: %d", sum);
	return 0;
}