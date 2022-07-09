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
	// i는 int type이므로 12까지 읽음 
	// scanf는 공백 전까지 읽음
	// j는 int type이므로 56까지 읽음

	return 0;
}