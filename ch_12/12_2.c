#include <stdio.h>

int main(void) {

	int a[] = { 0,1,2,3,4,5 };

	int* low = &a[0]; 
	int* high = &a[5];
	int* middle;

	// middle = (low + high) / 2; 

	// ������ �� ���� ���� �� ����. 
	// �ùٸ� ǥ�� ->
	middle = ((high - low) / 2) + low;
	printf("%d", *middle);

	return 0;
}