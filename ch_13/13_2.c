#include <stdio.h>

int main(void) {
	char* p = "abc";

	putchar(p); // illegal - 내부적으로 전달된 문자는 int형으로 변환됨
	putchar(*p); // a
	puts(p); // abc
	puts(*p); // illegal - puts에는 포인터를 전달 

	return 0;
}