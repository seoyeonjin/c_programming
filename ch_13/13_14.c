#include <stdio.h>

int main(void) {
	char s[] = "Hsjodi", * p;

	for (p = s; *p; p++) 
		--* p; //���ڿ��� �ϳ��� ���� ���� ����Ű�� ��.
	puts(s); // "Grinch"

	return 0;
}