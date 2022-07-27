#include <stdio.h>

int main(void) {
	int i, j, k;

	//(a)
	i = 3; j = 4; k = 5;
	printf("%d ", i < j || ++j < k); //1
	printf("%d %d %d", i, j, k); //3, 4, 5
	printf("\n");

	//(b)
	i = 7; j = 8; k = 9;
	printf("%d ", i -7 && ++j < k); // 0
	printf("%d %d %d", i, j, k); //7, 8, 9
	printf("\n");

	//(c)
	i = 7; j = 8; k = 9;
	printf("%d ", (i = j) || (j = k)); //1
	printf("%d %d %d", i, j, k); //8,8,9
	printf("\n");

	//(d)
	i = 1; j = 1; k = 1;
	printf("%d ", ++i || ++j && ++k); //1
	printf("%d %d %d", i, j, k); //2,1,1
	printf("\n");

	// &&�� �� ����� 0�̸� �ڿ� ����� �ʿ� x 
	// ||�� �� ����� 1�̸� �ڿ� ����� �ʿ� x
	return 0;
}