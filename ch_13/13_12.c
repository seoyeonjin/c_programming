#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_extension(const char* file_name, char* extension);

int main(void) {
	char str[] = "abc.txt";
	char extension[100] = "";
	get_extension(str, extension);
	printf("%s", extension);

	return 0;
}

void get_extension(const char* file_name, char* extension) {
	//strlen과 strcpy를 활용
	char* p = file_name;

	for (p = file_name; *p != '\0'; p++) {
		if (*p == '.')
			break;
	}
	if (*p == '.')
		strcpy(extension, ++p);
}
