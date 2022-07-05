#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int day_of_year(int month, int day, int year);

int main(void) {

	int m, d, y, days; 
	printf("Enter a month, day, year: ");
	scanf("%d%d%d", &m, &d, &y);

	days = day_of_year(m, d, y);

	printf("result: %d", days);
	return 0;
}

int day_of_year(int month, int day, int year) {
	int sum = 0; 
	for (int i = 1; i < month; i++) {
		if (i <= 7) {
			if (i % 2 == 0) {
				if (i == 2) {
					sum = sum + 28;
					if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
						sum = sum + 1;
					}
				}
				else
					sum = sum + 30;
			}
			else {
				sum = sum + 31;
			}
		}
		else {
			if (i % 2 == 0)
				sum = sum + 31;
			else
				sum = sum + 30;
		}
	}
	sum = sum + day;

	return sum;
}