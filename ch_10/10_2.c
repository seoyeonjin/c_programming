#include <stdio.h>

int b, c; //���� ���� 

void f(void) {
	int b, d;
}

void g(int a) {
	int c;
	{
		int a, d;
	}
}

int main(void) {

	int c, d;
	return 0;
}

//(a) f function - b(local),c,d
//(b) g function - c(local),a,d,b
//(c) a and d �� ����� block - b,c(local),a,d
//(d) main - c(local),d,b