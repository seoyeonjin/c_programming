#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i, j;
	char s[100];

	scanf("%d%s%d", &i, s, &j);
	printf("%d,%s, %d", i, s, j); 
	// i = 12
	// s = abc34
	// j = 56
	// i�� int type�̹Ƿ� 12���� ���� 
	// scanf�� ���� ������ ����
	// j�� int type�̹Ƿ� 56���� ����

	return 0;
}