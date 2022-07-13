#include <stdio.h>

struct { int x, y; } x;
struct { int x, y; } y;

int main(void) {

	// 가능하다 
	// struct x -> x.x, x.y 
	// struct y -> y.x, y.y
	// 를 가질 수 있다. 

	return 0;
}