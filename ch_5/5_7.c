#include <stdio.h>

int main(void) {
	int i = 17;
	printf("%d\n", i >= 0 ? i : -i);
	// 17 >= 0이므로 17이 출력된다. 
	i = -17;
	printf("%d\n", i >= 0 ? i : -i);
	// 17 >= 0이 성립하지 않으므로 -i인 17이 출력된다.
	return 0;
}