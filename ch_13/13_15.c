#include <stdio.h>

int f(char* s, char* t);

int main(void) {

	// a
	int result = f("abcd", "babc"); // 3
	printf("%d\n", result);
	// b
	result = f("abcd", "bcd"); // 0
	printf("%d\n", result);
	// c
	// s에 포함된 문자 중 t에 없는 문자의 s에서 index를 출력한다. 
	return 0;
}

int f(char* s, char* t) {
	char* p1, * p2;

	for (p1 = s; *p1; p1++) {
		for (p2 = t; *p2; p2++)
			if (*p1 == *p2) break;
		if (*p2 == '\0') break;
	}
	return p1 - s;
}