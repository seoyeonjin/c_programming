#include <stdio.h>

int a;

void f(int b) {
	int c;
}

void g(void) {
	int d;
	{
		int e;
	}
}

int main(void) {
	int f;
	
	return 0; 
}

//(a) f function scope������ ������ a,b,c
//(b) g function scope������ ������ a,d,e
//(c) e�� ���ǵ� block������ ������ a,d,e
//(d) main function scope������ ������ a,f