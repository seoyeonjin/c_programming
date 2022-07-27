#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
	int hour, minute, min, min_time, min_d;
	int t1, t2, t3, t4, t5, t6, t7, t8, d1, d2, d3, d4, d5, d6, d7, d8;
	int departure[8] = { 480, 9 * 60 + 43, 11 * 60 + 19, 12 * 60 + 47, 14 * 60, 15 * 60 + 45, 19 * 60, 21 * 60 + 45 };
	int arrival[8] = { 10 * 60 + 16, 11 * 60 + 52, 13 * 60 + 31, 15 * 60, 16 * 60 + 8, 17 * 60 + 55, 21 * 60 + 20, 23 * 60 + 58 };

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &minute);

	int time = hour * 60 + minute;

	min = departure[0];
	min_time = fabs(min - time);
	min_d = arrival[0];

	for (int i = 0; i < 8; i++) {
		if (fabs(departure[i] - time) < min_time) {
			min_time = fabs(departure[i] - time);
			min = departure[i];
			min_d = arrival[i];
		}
	}

	printf("Closest departure time is ");
	if (min / 60 > 12)
		printf("%d:", min / 60 - 12);
	else
		printf("%d:", min / 60);

	printf("%.2d", min % 60);

	if (min / 60 >= 12)
		printf(" p,m,");
	else
		printf(" a.m,");

	printf(", arriving at ");
	if (min_d / 60 > 12)
		printf("%d:", min_d / 60 - 12);
	else
		printf("%d:", min_d / 60);

	printf("%.2d", min_d % 60);


	if (min_d / 60 >= 12)
		printf(" p,m,");
	else
		printf(" a.m,");

	return 0;
}