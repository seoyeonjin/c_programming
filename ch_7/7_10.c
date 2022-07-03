#include <stdio.h>

int main(void) {

	// i 는 int, j는 long, k는 unsigned int

	// i + (int) j * k
	// (int)j * k의 결과는 unsigned int
	// signed와 unsigned가 같이 연산에 사용되면, C에서는 signed를 unsigned로 묵시적 변환한다.
	// 따라서 i + (int) j * k의 결과는 unsigned int

	return 0;
}