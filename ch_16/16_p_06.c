#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct date {
	int month; 
	int day; 
	int year;
};

int compare_dates(struct date d1, struct date d2);

int main(void) {
	int m1, d1, y1, m2, d2, y2, earlier;
	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%2d", &m1, &d1, &y1);
	printf("Enter second date(mm/dd/yy): ");
	scanf("%d/%d/%2d", &m2, &d2, &y2);

	struct date date1 = { m1,d1,y1 };
	struct date date2 = { m2,d2,y2 };

	int result = compare_dates(date1, date2);

	if (result == -1) {
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d", m1, d1, y1, m2, d2, y2);
	}
	else if (result == 1) {
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d", m2, d2, y2, m1, d1, y1);
	}
	else {
		printf("Equal");
	}
	return 0;
}

int compare_dates(struct date d1, struct date d2) { //b
	// d1이 더 빠를 때 -1 (작을 때)
	// d1이 더 느릴 때 1
	// 같을 때 0 

	if (d1.year < d2.year)
		return -1;
	else if (d1.year > d2.year)
		return 1;
	else {
		if (d1.month < d2.month)
			return -1;
		else if (d1.month > d2.month)
			return 1;
		else {
			if (d1.day < d2.day)
				return -1;
			else if (d1.month > d2.month)
				return 1;
			else
				return 0;
		}
	}
}
