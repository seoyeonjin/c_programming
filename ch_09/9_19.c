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

	//n�� 4�� �� 
	//ph(2) ȣ�� �� putchar('0' + 0 = 0);
	//ph(2) ȣ������ �� pb(1) ȣ�� �� putchar ('0' + 0 = 0)
	//ph(1) ȣ������ �� pb(0) ȣ�� �� putchar ('0' + 1 = 1)
	// ����� 100

	//2������ ��ȯ
}