#include <stdio.h>
#include <stdbool.h>

bool has_zero(int a[], int n) {
	int i;

	for (i = 0; i < n; i++)
		if (a[i] == 0)
			return true;
	return false;
	//0�� �ƴ� ���� ������ ���� �ƹ����۵� ����. 
	//return false�� for���� �� ������ ������ ����.
}

int main(void) {
	// �� zero�� �ƴϸ� false
	// �ϳ��� zero�� ������ true
	int a[] = { 1,2,3,4 };
	int n = 4;
	printf("%d", has_zero(a, n));

	return 0;
}