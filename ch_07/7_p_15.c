#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num;
	double fac = 1.0f;

	printf("Enter a positive integer: ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		fac = fac * i;
		if (fac > 9223372036854775807) {
			printf("max: %d\n", i);
			break;
		}
	}

	printf("%lf", fac);

	//(a) short�϶�  7���� ��Ȯ�� ����� ���� �� �ִ�. 
	//(b) int�� �� 12���� ��Ȯ�� ����� ���� �� �ִ�. 
	//(c) long�� �� 12���� ��Ȯ�� ����� ���� �� �ִ�. 
	//(d) long long�� �� 20���� ��Ȯ�� ����� ���� �� �ִ�. 
	//(e) float�� �� 34���� ��Ȯ�� ����� ���� �� �ִ�. 
	//(f) double�� �� 170���� ��Ȯ�� ����� ���� �� �ִ�. 
	//(g) long double�� �� 170���� ��Ȯ�� ����� ���� �� �ִ�. 
	
	return 0;
}