#include <stdio.h>
#define AVG(x,y) (x-y)/2
#define AREA(x,y) (x)*(y)


int main(void) {
	// (a) AVG�� x=5, y�� 2-1�� �־����� �� 4-2-1�� ����ϰ� �ǹǷ� (((x)-(y))/2)�� �����־�� �Ѵ�. 
	printf("%f\n", AVG(5.0, 2.0-1.0));
	// (b) AREA(x,y) �� ����� �� ����� ���ǰ� �ٸ� ������ ����Ǿ�� �ϹǷ� ()�� �����ش�. 
	// -> ((x)*(y))
	printf("%d\n", 100 / AREA(5, 10));

	return 0;
}