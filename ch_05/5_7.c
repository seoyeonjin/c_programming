#include <stdio.h>

int main(void) {
	int i = 17;
	printf("%d\n", i >= 0 ? i : -i);
	// 17 >= 0�̹Ƿ� 17�� ��µȴ�. 
	i = -17;
	printf("%d\n", i >= 0 ? i : -i);
	// 17 >= 0�� �������� �����Ƿ� -i�� 17�� ��µȴ�.
	return 0;
}