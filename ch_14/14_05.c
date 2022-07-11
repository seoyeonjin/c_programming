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
	// 출력 -> D

	// b
	strcpy(s, "0123"); // s = "0123"
	i = 0;
	putchar(TOUPPER(s[++i])); //0123은 소문자 범위에 해당 x 
	// ('a' <= (++i) && (++i) <= 'z' ? (++i) - 'a' + 'A' : (++i)) //0->1->2
	// && 앞부분이 거짓이므로 뒷부분 실행 x. 따라서 조건문 실행 후 값이 1이 되고
	// : (++i) 을 통해 최종적으로 2가 출력된다. 
	// 출력 -> 2

	return 0;
}