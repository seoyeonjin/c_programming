#include <stdio.h>

void remove_filename(char* url);

int main(void) {
	char str[] = "http://www.knking.com/index.html";
	remove_filename(str);

	printf("%s", str);
	return 0;
}

void remove_filename(char* url) {
	while (*url++) {
		if (*url == ':')
			url = url + 3;
		if (*url == '/') {
			*url = '\0';
			break;
		}
	}
}