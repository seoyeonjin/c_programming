#include <stdio.h>

int main(void) {
	int i, j, k;

	//(a)
	i = 2; j = 3;
	k = i * j == 6; 
	printf("%d", k); // i * j �� 6�̰�, i * j == 6�� true�̹Ƿ� k�� 1�� ��µȴ�. 
	printf("\n");

	//(b)
	i = 5; j = 10; k = 1;
	printf("%d", k > i < j); // 0 < 10 �̹Ƿ� 1 ���
	printf("\n");

	//(c)
	i = 3; j = 2; k = 5;
	printf("%d", i < j == j < k);//0
	printf("\n");

	//(d)
	i = 3; j = 4; k = 5; 
	printf("%d", i % j + 1 < k); //4<5 �̹Ƿ� 1 ���
	printf("\n");
	return 0;
}