#include <stdio.h>

int main(void) {
	int i;
	
	//(a)
	for (i = 0; i<10; i++)

	//(b)
	for (i = 0; i<10;++i)

	//(c)
	for (i = 0; i++<10; )

	// c가 다르게 동작. i < 10을 비교하고 그 뒤에 +1이 추가됨.
	return 0;
}