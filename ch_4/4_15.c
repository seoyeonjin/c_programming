#include <stdio.h>

int main(void) {
	int i = 1, j = 2;

	//(a)
	i += j;
	printf("%d %d", i,j); // 3 2 
	printf("\n");

	//(b)
	i--;
	printf("%d %d", i, j); // 2 2
	printf("\n");

	//(c)
	i * j / i; //���� ����� ������ ����
	printf("%d %d", i, j); // 2 2
	printf("\n");

	//(d)
	i% ++j; //���� ����� ������ ����
	printf("%d %d", i, j); // 2 3
	printf("\n");

	return 0;
}