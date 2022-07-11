#include <stdio.h>
#define DOUBLE(x) 2*x

int main(void) {

	// (a) DOUBLE(1+2) -> 2*1+2 -> 2+2 = 4
	// (b) 4/DOUBLE(2) -> 4/2*2 -> 1*2 = 2
	// (c) Fix -> # define DOUBLE(x) 2*(x)

 	return 0;
}