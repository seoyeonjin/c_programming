#include <stdio.h>

int count_spaces(const char s[]);

int main(void) {

	char str[] = "abc def ghi ";
	int result = count_spaces(str);
	printf("%d", result);
	return 0;
}

int count_spaces(const char s[]) {
	int count = 0;

	while (*s++)
		if (*s == ' ')
			count++;

	return count;
}