#include <stdio.h>

int read_line_a(char str[], int n) {
	int ch, i = 0;
	ch = getchar();
	if (isspace(ch) == 0)
		str[i++] = ch;

	while ((ch = getchar()) != '\n') {
		if (i < n)
			str[i++] = ch;
	}
	str[i] = '\0';
	return i;
}

int read_line_b(char str[], int n) {
	int ch, i = 0;

	while (isspace((ch = getchar())) == 0) {
		if (i < n)
			str[i++] = ch;
	}
	str[i] = '\0';
	return i;
}

int read_line_c(char str[], int n) {
	int ch, i = 0;

	while ((ch = getchar()) != '\n') {
		if (i < n)
			str[i++] = ch;
	}
	str[i++] = '\n';
	str[i] = '\0';
	return i;
}

int read_line_c(char str[], int n) {
	int ch, i = 0;

	while ((ch = getchar()) != '\n') {
		if (i < n -1)
			str[i++] = ch;
	}
	str[i] = '\0';
	return i;
}


int read_line(char str[], int n) {
	int ch, i = 0;
	ch = getchar(); 
	if (isspace(ch) == 0)
		str[i++] = ch;

	while ((ch = getchar()) != '\n') {
		if (i < n)
			str[i++] = ch;
		if (isspace(ch) != 0)
			break;
	}
	str[i++] = '\n';
	str[i] = '\0';
	return i;
}

int main(void) {
	
	return 0;
}