#include <stdio.h>

int main(void) {
	// i 는 int
	// p, q는 int를 가리키는 포인터

	// (a) p = i; -> 포인터에 변수 저장 x 
	// (b) *p = &i -> p가 가리키는 위치에 i의 주솟값 저장 x 
	// (c) &p = q; -> p의 주솟값에 포인터 할당 x
	// (d) p = &q; ->  q의 주솟값 할당 x
	// (e) p = *&q; -> p = q o
 	// (f) p = q -> p = q o
	// (g) p = *q -> x
	// (h) *p = q; -> x
	// (i) *p = *q; -> o

	// (e), (f), (i)
	return 0;
}