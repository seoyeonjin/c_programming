#include <stdio.h>

int main(void) {
	int i;
	
	//(a)
	for (i = 0; i<10; i++)

	//(b)
	for (i = 0; i<10;++i)

	//(c)
	for (i = 0; i++<10; )

	// c�� �ٸ��� ����. i < 10�� ���ϰ� �� �ڿ� +1�� �߰���.
	return 0;
}