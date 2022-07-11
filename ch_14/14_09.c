#include <stdio.h>
#include <math.h>

#define CHECK(x,y,n) ( (x > 0 && x < n-1) && (y > 0 && y < n-1) ? 1 : 0)
#define MEDIAN(x,y,z) ( ((y) - (x)) * ((z) - (x)) < 0 ? x : ((x) - (y)) * ((z) - (y)) < 0 ? y : z ) 
#define POLYNOMIAL(x) (3 * pow((x),5) + 2 * pow((x), 4) - 5 * pow((x), 3) - pow((x), 2) + 7 * x - 6)

int main(void) {
	// 둘의 부호가 다르면 하나는 x보다 크고 하나는 x보다 작다

	int x = 1;
	int y = 2;
	int n = 4;
	int result = CHECK(x, y, n);
	result = MEDIAN(x, y, n);
	result = POLYNOMIAL(0);

	printf("%d", result);
}