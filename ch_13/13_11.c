#include <stdio.h>

int strcmp(char* s, char* t) {
	char* i, * j;

	for (i = s, j = t; *i == *j; i++, j++)
		//printf("%c", *i);
		if (*i == '\0')
			return 0;
	return (*i) - (*j);
}

int main(void) {

	char str[] = "bcde";
	char str_2[] = "abcdef";

	int result = strcmp(str, str_2);
	printf("Result: %d", result);
	return 0;
}