#include <stdio.h>

int main(void) {
	char str[100];

	strcpy(str, "tire-bouchon"); // str은 tire-bouchon이란 값을 가지게 됨
	strcpy(&str[4], "d-or-wi"); //str[4]인 -값부터 d-po-wi값을 copy. 따라서 tired-or-wi란 값을 가지게 됨
	strcat(str, "red?"); //두 string이 합쳐짐. tired-or-wired?
	printf("%s", str);

	return 0;
}