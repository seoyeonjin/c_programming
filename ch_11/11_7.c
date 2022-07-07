#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void split_date(int day_of_year, int year, int* month, int* day);

int main(void) {

	int day_of_year, year, month, day;
	printf("day_of_year: ");
	scanf("%d", &day_of_year);
	printf("year: ");
	scanf("%d", &year);
	split_date(day_of_year, year, &month, &day);
	printf("month/day: %d/%d", month, day);
	return 0;
}

void split_date(int day_of_year, int year, int* month, int* day) {
	int jan_to_july = 181 + 31; 
	int feb = 28;

	*month = 1; 


	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
		jan_to_july = jan_to_july + 1;
		feb = feb + 1;
	}
	if (day_of_year <= jan_to_july) {
		while (1) {
			if (*month % 2 != 0) {
				if (day_of_year > 31) {
					day_of_year -= 31;
					*month = *month + 1;
				}
				else {
					*day = day_of_year;
					break;
				}
			}
			else {
				if (*month == 2) {
					if (day_of_year > feb) {
						day_of_year -= feb;
						*month = *month + 1;
					}
					else {
						*day = day_of_year;
						break;
					}
				}
				else if (day_of_year > 30) {
					day_of_year -= 30;
					*month = *month + 1;
				}
				else {
					*day = day_of_year;
					break;
				}
			}
		}
	}
	else {
		*month = 7;
		day_of_year -= jan_to_july;
		while (1) {
			if (*month % 2 != 0) {
				if (day_of_year > 30) {
					day_of_year -= 30;
					*month = *month + 1;
				}
				else {
					*day = day_of_year;
					break;
				}
			}
			else {
				if (day_of_year > 31) {
					day_of_year -= 31;
					*month = *month + 1;
				}
				else {
					*day = day_of_year;
					break;
				}
			}
		}
	}
}
