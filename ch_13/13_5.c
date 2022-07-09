#include <stdio.h>

void capitalize_a(char str[], int n);
void capitalize_b(char str[]);

int main(void) {

	char str[4] = "abc";
	int n = 3;
	
	capitalize_b(str);
	printf("%s", str);
	return 0;
}

void capitalize_a(char str[], int n) {
	for (int i = 0; i < n; i++) {
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