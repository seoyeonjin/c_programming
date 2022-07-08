#include <stdio.h>
#define N 10

int main(void) {
	int a[N] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = &a[0], * q = &a[N - 1], temp; //p는 처음을, q는 마지막을 가리키는 포인터.

	while (p < q) { //p가 q보다 작을 때까지
		temp = * p;
		*p++ = *q; 
		*q-- = temp; 
	}
	
	// 출력할 때
	//a[N] = {10,9,8,7,6,5,4,3,2,1};
	
	return 0;
}