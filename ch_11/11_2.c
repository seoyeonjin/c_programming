#include <stdio.h>

int main(void) {
	// i �� int
	// p, q�� int�� ����Ű�� ������

	// (a) p = i; -> �����Ϳ� ���� ���� x 
	// (b) *p = &i -> p�� ����Ű�� ��ġ�� i�� �ּڰ� ���� x 
	// (c) &p = q; -> p�� �ּڰ��� ������ �Ҵ� x
	// (d) p = &q; ->  q�� �ּڰ� �Ҵ� x
	// (e) p = *&q; -> p = q o
 	// (f) p = q -> p = q o
	// (g) p = *q -> x
	// (h) *p = q; -> x
	// (i) *p = *q; -> o

	// (e), (f), (i)
	return 0;
}