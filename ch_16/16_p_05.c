#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUM 8

int main(void) {
	int hour, minute, min, min_time, min_d;
	int t1, t2, t3, t4, t5, t6, t7, t8, d1, d2, d3, d4, d5, d6, d7, d8;
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &minute);

	int time = hour * 60 + minute;

	t1 = 480;
	t2 = 9 * 60 + 43;
	t3 = 11 * 60 + 19;
	t4 = 12 * 60 + 47;
	t5 = 14 * 60;
	t6 = 15 * 60 + 45;
	t7 = 19 * 60;
	t8 = 21 * 60 + 45;

	d1 = 10 * 60 + 16;
	d2 = 11 * 60 + 52;
	d3 = 13 * 60 + 31;
	d4 = 15 * 60;
	d5 = 16 * 60 + 8;
	d6 = 17 * 60 + 55;
	d7 = 21 * 60 + 20;
	d8 = 23 * 60 + 58;


	struct {
		int departure_time;
		int arrival_time;
	} time_table[NUM] = {
		{t1, d1},
		{t2, d2},
		{t3, d3},
		{t4, d4},
		{t5, d5},
		{t6, d6},
		{t7, d7},
		{t8, d8}
	};

	min_time = t1 > time ? t1 - time : time - t1;
	min = t1; 
	min_d = d1;

	for (int i = 1; i < NUM; i++) {
		if (time < time_table[i].departure_time) {
			if (time_table[i].departure_time - time < min_time) {
				min_time = time_table[i].departure_time - time;
				min = time_table[i].departure_time;
				min_d = time_table[i].arrival_time;
			}
		}
		else {
			if (time - time_table[i].departure_time < min_time) {
				min_time = time - time_table[i].departure_time;
				min_d = time_table[i].arrival_time;
				min = time_table[i].departure_time;
			}
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