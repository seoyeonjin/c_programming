#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void pb(int n);

int main(void) {

	int n;
	printf("Enter a number: ");
	scanf("%d", &n);

	pb(n);
	return 0;
}

void pb(int n) {
	if (n != 0) {
		pb(n / 2);
		putchar('0' + n % 2);
	}

	//n이 4일 때 
	//ph(2) 호출 후 putchar('0' + 0 = 0);
	//ph(2) 호출했을 때 pb(1) 호출 후 putchar ('0' + 0 = 0)
	//ph(1) 호출했을 때 pb(0) 호출 후 putchar ('0' + 1 = 1)
	// 출력은 100

	//2진수로 변환
}