#include <stdio.h>

struct date {
	int month, day, year;
};

int day_of_year(struct date d) { //a
	return d.day;
}

int compare_dates(struct date d1, struct date d2) { //b
	// d1�� �� ���� �� -1 (���� ��)
	// d1�� �� ���� �� 1
	// ���� �� 0 

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

int main(void) {
	struct date d1 = { 3,2,2020 };
	struct date d2 = { 2,2,2020 };
	printf("day: %d\n", day_of_year(d1));
	printf("Compare: %d", compare_dates(d1, d2));

	return 0;
}
