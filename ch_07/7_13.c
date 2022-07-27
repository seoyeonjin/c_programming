#include <stdio.h>

int main(void) {
	
	char c = '\l'; //8Áø¼ö?
	short s = 2;
	int i = -3;
	long m = 5;
	float f = 6.5f;
	double d = 7.5;

	//(a) 
	printf("%d\n", c * i); 
	// 108 * -3 = -324
	// type = int

	//(b)
	printf("%ld\n", s + m);
	// 7
	// type = long 

	//(c)
	printf("%f\n", f / c);
	// 060185
	// type = float

	//(d)
	printf("%f\n", d / s);
	// 3.75
	// type = double

	//(e)
	printf("%f\n", f - d);
	// -1
	// type = double

	//(f)
	printf("%d", (int)f);
	// 6
	// type = int

	return 0;
}