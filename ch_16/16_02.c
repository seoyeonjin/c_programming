#include <stdio.h>

struct { //a
	double real;
	double imaginary;
} c1 = { 0.0,1.0 }, //b
  c2 = { 1.0, 0.0 }, c3;

int main(void) {

	// c1 = c2; //c - one statement·Î °¡´É

	//d
	c3.real = c1.real + c2.real;
	c3.imaginary = c1.imaginary, c2.imaginary;

	printf("%lf %lf", c3.real, c3.imaginary);

	return 0;
}