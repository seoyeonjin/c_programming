#include <stdio.h>

int main(void) {
	float f, frac_part;

	f = 6.534322f;

	printf("%f", f - (int)f);
	// f�� int�� ��ȯ���� �� int�� ǥ���� �� �ִ� �������� ũ�ٸ� ���ϴ� ����� ���� ���� ���� �ִ�. 
	return 0;
}