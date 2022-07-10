#include <stdio.h>

int main(void) {
	char s[] = "Hsjodi", * p;

	for (p = s; *p; p++) 
		--* p; //문자열이 하나씩 작은 값을 가리키게 됨.
	puts(s); // "Grinch"

	return 0;
}