#include <stdio.h>

typedef struct {
	double real;
	double imaginary;
} complex ; //a

complex make_complex(double a, double b) {
	complex c;
	c.real = a;
	c.imaginary = b;
	return c;
} //c

complex add_complex(complex a, complex b) {
	complex c;
	c.real = a.real + b.real;
	c.imaginary = a.imaginary + b.imaginary;
	return c;
} //d

int main(void) {
	complex c1, c2, c3; //b
	
	return 0;
}