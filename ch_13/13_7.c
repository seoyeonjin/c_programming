#include <stdio.h>

int main(void) {
	
	char str[] = "abc";
	printf("%s", str);
	// a ���� �� *str = 0 -> null�� �ƽ�Ű�ڵ� ���� 0. null�� ��Ÿ��.
	// b ���� �� str[0] = '\0' -> string ���� ��Ÿ���� �ڵ�. null�� ��Ÿ��. 
	// c ���� �� strcpy(str, "") -> ""�� str���� ����. null
	// d ���� �� strcat(str, "") -> str + "" 

	// ���� d�� �������� ���� ������ �� ���� ������ �ٸ���.

	return 0;
}