#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void reverse_name(char* name);

int main(void) {
	char name[100]; 

	printf("Enter a first and last name: ");
	gets(name);
	
	reverse_name(name);

	printf("%s", name);

	return 0;
}

void reverse_name(char* name) {

	char* first = name;
	first[1] = '\0';
	char* last;

	char* p = name;

	while (*p != ' ') { p++; }  //������ first name
	while (*p == ' ') { p++;} // ���� ����
	last = p; // last�� ����Ŵ

	char* p2 = last;

	while (*p2 != ' ' && *p2 != '\0') {
		p2++;
	}
	if (*p2 == ' ')
		*p2 = '\0';

	strcat(last, ", ");
	strcat(first, ".");
	strcat(last, first);
	strcpy(name, last);
}
