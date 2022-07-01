#include <stdio.h>

int main(void) {
	// n == 0  일때 n is between 1 and 10이 출력된다. 
	// 0 >= 1 은 0
	// 0 <= 10 은 1 -> if 문 안으로 들어감
	int n = 10;

	if (n >= 1 <= 10) {
		printf("n is between 1 and 10\n");
	}

	return 0;
}