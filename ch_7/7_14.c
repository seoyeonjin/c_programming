#include <stdio.h>

int main(void) {
	float f, frac_part;

	f = 6.534322f;

	printf("%f", f - (int)f);
	// f를 int로 변환했을 때 int가 표현할 수 있는 범위보다 크다면 원하는 결과를 얻지 못할 수도 있다. 
	return 0;
}