#include <stdio.h>
#define TOUPPER(c) ('a' <= (c) && (c) <= 'z' ? (c) - 'a' + 'A' : (c))

int main(void) {

	char s[10];
	int i;
	// a
	strcpy(s, "abcd"); // s = "abcd"
	i = 0; 
	putchar(TOUPPER(s[++i])); 
	// ('a' <= (++i) && (++i) <= 'z' ? (++i) - 'a' + 'A' : (++i)) //0->1->2->3
	// ��� -> D

	// b
	strcpy(s, "0123"); // s = "0123"
	i = 0;
	putchar(TOUPPER(s[++i])); //0123�� �ҹ��� ������ �ش� x 
	// ('a' <= (++i) && (++i) <= 'z' ? (++i) - 'a' + 'A' : (++i)) //0->1->2
	// && �պκ��� �����̹Ƿ� �޺κ� ���� x. ���� ���ǹ� ���� �� ���� 1�� �ǰ�
	// : (++i) �� ���� ���������� 2�� ��µȴ�. 
	// ��� -> 2

	return 0;
}