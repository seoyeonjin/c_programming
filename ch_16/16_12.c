#include <stdio.h>

union {
	double a;  //8
	struct { //4 + 8 + 4 = 16
		char b[4];
		double c;
		int d;
	}e;
	char f[4]; //4 
}u; // ���� ū struct�� ���� 16 bytes �Ҵ�