#include <stdio.h>

void capitalize_a(char str[]);
void capitalize_b(char str[]);

int main(void) {

	char str[4] = "abc";
	printf("%s\n", str);
	capitalize_b(str);
	printf("%s", str);
	return 0;
}

void capitalize_a(char str[]) {

	for (int i = 0; ; i++) {
		if (str[i] == '\0')
			break;
		str[i] = toupper(str[i]);
	}
}

void capitalize_b(char str[]) {
	char* p = str;
	while (*p != '\0') {
		*p = toupper(*p);
		p++;
	}
}