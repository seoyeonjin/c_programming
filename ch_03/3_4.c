#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i, j;
	float x;
	scanf("%d%f%d", &i, &x, &j);

	// input -> 10.3 5 6
	// i는 10이다. integer에 .은 포함될 수 없으므로 10만 할당
	// x는 .3이다. 
	// j는 5이다. 
	// 뒤에 6은 다음 scanf가 읽을 수 있는 값으로 남겨둔다. 

	return 0;
}