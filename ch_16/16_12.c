#include <stdio.h>

union {
	double a;  //8
	struct { //4 + 8 + 4 = 16
		char b[4];
		double c;
		int d;
	}e;
	char f[4]; //4 
}u; // 가장 큰 struct를 위해 16 bytes 할당