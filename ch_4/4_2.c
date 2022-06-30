#include <stdio.h>

int main(void) {
	int i = 7, j = 5;
	printf("%d", (-i) / j);
	printf("\n");
	printf("%d", -(i / j));

	// (-i) / j 를 했을 때 -7 = 5 * (-2) + 3으로 표현될 수도 있고
	//                     -7 = 5 * (-1) - 2로 표현될 수도 있다. 
	// 따라서 어떻게 연산하느냐에 따라 두 계산식의 결과가 달라질 수 있다. 

	return 0;
}