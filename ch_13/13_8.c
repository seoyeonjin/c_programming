#include <stdio.h>

int main(void) {
	char str[100];

	strcpy(str, "tire-bouchon"); // str�� tire-bouchon�̶� ���� ������ ��
	strcpy(&str[4], "d-or-wi"); //str[4]�� -������ d-po-wi���� copy. ���� tired-or-wi�� ���� ������ ��
	strcat(str, "red?"); //�� string�� ������. tired-or-wired?
	printf("%s", str);

	return 0;
}