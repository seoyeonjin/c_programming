#include <stdio.h>

struct complex {
	double real; 
	double imaginary;
}; //a 

struct complex make_complex(double a, double b) {
	struct complex c;
	c.real = a;
	c.imaginary = b;
	return c;
} //c

struct complex add_complex(struct complex a, struct complex b) {
	struct complex c;
	c.real = a.real + b.real;
	c.imaginary = a.imaginary + b.imaginary;
	return c;
} //d

int main(void) {

	struct complex c1, c2, c3; //b

	return 0;
}