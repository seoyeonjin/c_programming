#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* duplicate(char *str);

int main(void) {
	char* str1 = "string";
	char* str2 = duplicate(str1);

	printf("copied: %s", str2);

	return 0;
}

char* duplicate(char* str) {
	char* new = malloc(strlen(str) + 1);

	if (new == NULL) {
		printf("Error");
		return;
	}
	strcpy(new, str);
	return new;
}