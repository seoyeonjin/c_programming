#include <ctype.h>
#include <stdio.h>
#include "readline.h"

int read_line(char str[], int n) {
	int ch, i = 0; 

	//while (isspace(ch = getchar()));
	if (isspace(ch = getchar()))
		return i;
	while (ch != '\n' && ch != EOF) {
		if (i < n)
			str[i++] = ch;
		ch = getchar();
	}
	str[i] = '\0';
	return i; 
}