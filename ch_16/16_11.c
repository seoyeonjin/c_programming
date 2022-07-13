#include <stdio.h>


struct {
	double a; //8 bytes
	union { // 가장 큰 double을 위해 8 byts 할당
		char b[4];
		double c;
		int d;
	}e;
	char f[4]; //4 bytes 할당 
}s;  // 총 20 bytes 할당