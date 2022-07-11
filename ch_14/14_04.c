#include <stdio.h>
#define AVG(x,y) (x-y)/2
#define AREA(x,y) (x)*(y)


int main(void) {
	// (a) AVG는 x=5, y가 2-1로 주어졌을 때 4-2-1을 계산하게 되므로 (((x)-(y))/2)로 고쳐주어야 한다. 
	printf("%f\n", AVG(5.0, 2.0-1.0));
	// (b) AREA(x,y) 를 계산할 때 결과가 계산되고 다른 연산이 진행되어야 하므로 ()로 묶어준다. 
	// -> ((x)*(y))
	printf("%d\n", 100 / AREA(5, 10));

	return 0;
}