#include <stdio.h>

int main(void) {
	int i = 7, j = 5;
	printf("%d", (-i) / j);
	printf("\n");
	printf("%d", -(i / j));

	// (-i) / j �� ���� �� -7 = 5 * (-2) + 3���� ǥ���� ���� �ְ�
	//                     -7 = 5 * (-1) - 2�� ǥ���� ���� �ִ�. 
	// ���� ��� �����ϴ��Ŀ� ���� �� ������ ����� �޶��� �� �ִ�. 

	return 0;
}