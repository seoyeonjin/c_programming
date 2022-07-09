#include <stdio.h>

int main(void) {

	char s1[100];
	char s2[100];
	strcpy(s1, "computer");
	strcpy(s2, "science");

	if (strcmp(s1, s2) < 0) // c < s 는 참
		strcat(s1, s2); // s1 == computerscience
	else
		strcat(s2, s1);
	s1[strlen(s1) - 6] = '\0'; // s1 ==computers'\0'

	printf("%s", s1); // computers 출력
	return 0;
}