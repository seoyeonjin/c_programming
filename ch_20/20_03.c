#include <stdio.h>
#define M(x,y) ((x)^=(y), (y)^=(x), (x)^=(y))

int main(void) {

	// x와 y값이 바뀐다. 
	
	// 시작
	// x = 111
	// y = 100

	// x ^= y
	// x = 011
	// y = 100

	// y ^= x
	// x = 011
	// y = 100

	// x ^= y
	// x = 111
	// y = 100


	return 0;
}