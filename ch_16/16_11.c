#include <stdio.h>


struct {
	double a; //8 bytes
	union { // ���� ū double�� ���� 8 byts �Ҵ�
		char b[4];
		double c;
		int d;
	}e;
	char f[4]; //4 bytes �Ҵ� 
}s;  // �� 20 bytes �Ҵ�