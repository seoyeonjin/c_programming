#include <stdio.h>

int main(void) {
	char* p = "abc";

	putchar(p); // illegal - ���������� ���޵� ���ڴ� int������ ��ȯ��
	putchar(*p); // a
	puts(p); // abc
	puts(*p); // illegal - puts���� �����͸� ���� 

	return 0;
}