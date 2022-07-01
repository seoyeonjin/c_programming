#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int m1, d1, y1, m2, d2, y2, earlier;
	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%2d", &m1, &d1, &y1);
	printf("Enter second date(mm/dd/yy): ");
	scanf("%d/%d/%2d", &m2, &d2, &y2);

	if (y1 < y2)
		earlier = 1;
	else if (y1 > y2)
		earlier = 2;
	else {
		if (m1 < m2)
			earlier = 1;
		else if (m1 > m2)
			earlier = 2;
		else {
			if (d1 < d2)
				earlier = 1;
			else if (d1 > d2)
				earlier = 2;
		}
	}
	
	if (earlier == 1) {
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d", m1, d1, y1, m2, d2, y2);
	}
	else {
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d", m2, d2, y2, m1, d1, y1);
	}
	return 0;
}