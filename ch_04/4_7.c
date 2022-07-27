#include <stdio.h>

int main(void) {

	// 위에 식
	// 9 - ((total - 1) % 10)

	// 아래 식
	// 10 - (total % 10)

	// if total = 10일 때
	// 위: 9 - ((10 - 1) % 10) = 9 - 9 = 0
	// 아래: 10 - (10 % 10) = 10 - 0 = 10

	return 0;
}

