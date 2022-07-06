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

//(a) f function scope내에서 변수는 a,b,c
//(b) g function scope내에서 변수는 a,d,e
//(c) e가 정의된 block내에서 변수는 a,d,e
//(d) main function scope내에서 변수는 a,f